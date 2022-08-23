# Testing Bazel

Bazel is an open-source compiler that can be used as alternative of CMake for C++.

More information about it and about how to install it (I am using Ubuntu 20.04) at [Bazel](https://bazel.build/start)

# Overwrite

This repository is a simple container to test the [Bazel C++ tutorials](https://bazel.build/start/cpp).

Regarding the IDE, I am using VS Code + the [Bazel](https://marketplace.visualstudio.com/items?itemName=BazelBuild.vscode-bazel) extension and the usual other extension for C++.

# Setup

First, to get these tutorials execute:

```bash
git submodule update --init --recursive
```

They will be cloned in the `official_tutorials` folder, where we can found the C++ examples in the folder `cpp-tutorial`.

# Usage

## Bazel Basic Tutorials

Follow the basic tutorials [website](https://bazel.build/start/cpp) to complete the 3 basic stages. Here, we learn how to create our first package, executable, library and a second package which the first one depend.

## My own tests

# Test 1

Simply creating a chain of dependencies: lib1 (Vehicle) -> lib2 (Car) -> main (using Car).


