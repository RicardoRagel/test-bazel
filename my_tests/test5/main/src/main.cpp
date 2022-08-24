/*

Access to the same memory area from two different threads.
The access is controlled by a mutex.

Note that the first thread that takes the mutex does its stuff, 
so the same thread could access twice in a row. That means that
the thread has not communication between them.

*/

#include <iostream> // std::cout
#include <vector>   // std::vector
#include <thread>   // std::thread
#include <mutex>    // std::mutex

// Aliases
using namespace std;
using Vector = std::vector<int>;

// Global var
std::mutex v_access; // Ensure it doesn't read the vector while other thread is writing and viceversa.

void reader(Vector &v)
{
    cout << "(reader) Init" << endl;

    while(true)
    {
        v_access.lock();
        
        cout << "(reader) Reading vectors: ";
        for(auto element : v)
        {
            cout << element << ", ";
        }
        cout << endl;
        
        v_access.unlock();

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    cout << "(reader) Finishes" << endl;
}

void writer(Vector &v)
{
    cout << "(writer) Init" << endl;

    while(true)
    {
        v_access.lock();

        int new_element = v.size() + 1;
        cout << "(writer) Adding element " << new_element << " at the end" << endl;
        v.push_back(new_element);

        v_access.unlock();

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    cout << "(writer) Finishes" << endl;
}

int main(int argc, char **argv)
{
    cout << endl;
    cout << "(main) Test Threads:" << endl;
    cout << "--------------------" << endl;

    // A shared container
    Vector v = {1, 2, 3};
    //reader(v);

    // Spawn two new threads
    std::cout << "(main) reader and writer will be executed concurrently...\n";
    std::thread reader_th (reader, std::ref(v));  // It calls reader(v), passing v as reference
    std::thread writer_th (writer, std::ref(v));  // It calls writer(v), passing v as reference

    // // Synchronize threads
    reader_th.join();   // pauses until reader finishes
    writer_th.join();   // pauses until writer finishes

    std::cout << "(main) reader and writer completed.\n";

    return 0;
}