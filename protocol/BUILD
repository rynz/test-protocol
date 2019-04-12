cc_library(
    name = "protocol",
    srcs = ["protocol.cc"],
    hdrs = ["protocol.h"],
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_absl//absl/strings:str_format",
    ],
)

cc_test(
    name = "protocol_test",
    srcs = ["protocol_test.cc"],
    deps = [
        ":protocol",
        "@com_google_googletest//:gtest_main",
    ],
)
