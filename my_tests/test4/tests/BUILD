load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "test_car",
    srcs = glob(["*.cpp"]),
    deps = [
        "//libs:AllVehicles",
        "@gtest//:gtest_main"
    ],
)