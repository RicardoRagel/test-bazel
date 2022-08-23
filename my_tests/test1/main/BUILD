# From the package cc of the rules_cc repository, import the rule cc_binary defined 
# in the file defs.bzl
load("@rules_cc//cc:defs.bzl", "cc_binary")

# Build rule for creating an executable (target).
cc_binary(
    name = "test-cars",         # Target name or label
    srcs = ["src/main.cpp"],    # Target source files
    deps = ["//car:car"],       # Target dependencies
)

# Notice that the target dependency is defined as //package:target_name
# Genrally, the labels follow the next nomenclature:
# @repository//path_to_package:path_to_target
# However, in case they are in the same repository (group of packages)
# the repository (@repository) can be omitted. In the same way, if the target is 
# in the same package, we could omitt the package (//path_to_package), accessing
# the files directly as :path_to_target or, directly, path_to_target.