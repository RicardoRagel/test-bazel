# No comments, check vehicle package's BUILD for them
load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "car",
    strip_include_prefix = "include",
    hdrs = ["include/Car.h"],
    srcs = ["src/Car.cpp"],
    deps = ["//vehicle:vehicle"],
    visibility = ["//main:__pkg__"],
)