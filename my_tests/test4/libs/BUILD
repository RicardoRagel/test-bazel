load("@rules_cc//cc:defs.bzl", "cc_library")

# In this case, we have multiple libs here, so we can simpy compile
# all of them using glob and *
cc_library(
    name = "AllVehicles",
    strip_include_prefix = "include",
    srcs = glob(["src/*.cpp"]),
    hdrs = glob(["include/*.h"]),
    visibility = ["//visibility:public"]
)