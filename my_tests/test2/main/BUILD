load("@rules_cc//cc:defs.bzl", "cc_binary")

# Build rule for creating an executable (target).
cc_binary(
    name = "test-cars",         # Target name or label
    srcs = ["src/main.cpp"],    # Target source files
    deps = ["@test1//car:car"], # Target dependencies USING OTHER PROJECT LIB
)

# Check the WORKSPACE file to see how the repo test1 was linked.