# From the package cc of the rules_cc repository, import the rule cc_binary defined 
# in the file defs.bzl
load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "vehicle",                   # Target name
    strip_include_prefix = "include",   # Allow source files include headers (hdrs) without this prefix
    hdrs = ["include/Vehicle.h"],       # Header files
    srcs = ["src/Vehicle.cpp"],         # Source files
    visibility = ["//car:__pkg__"],     # Allow car pakage to use this target
)

# For the same purpose, instead of
#   strip_include_prefix = "include",
# We can use
#   copts = ["-Ivehicle/include"]
# However, this same vehicle/include folder would need to be also included 
# in the car project, getting difficult if the dependency graph is bigger.

# Visibility can be:
#   visibility = ["//visibility:public"] 
# so all pkgs can see it.