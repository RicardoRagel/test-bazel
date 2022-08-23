load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "vehicle",
    strip_include_prefix = "include",
    hdrs = ["include/Vehicle.h"],
    srcs = ["src/Vehicle.cpp"],
    visibility = ["//car:__pkg__"],
)

# Visibility can be visibility = ["//visibility:public"], so all pkgs can see it