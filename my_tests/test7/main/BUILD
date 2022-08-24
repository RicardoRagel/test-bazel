load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_library(
    name = "AllVehiclesLib",
    srcs = ["third-party/lib/libAllVehicles.so"],
    hdrs = [
        "third-party/include/Vehicle.h",
        "third-party/include/Car.h"
        ],
    strip_include_prefix = "third-party/include",
)

cc_binary(
    name = "test-all-vehicles",
    srcs = ["src/main.cpp"],    
    deps = [":AllVehiclesLib"],
)

# Note that the effect of strip_include_prefix is actually in the main.cpp binary file,
# so we can include "Car.h" and not "../third-party/include/Car.h"