#include "protocol/protocol.h"

#include "gtest/gtest.h"

namespace protocol {
namespace {

TEST(ProtocolTest, Example) {
  Protocol protocol;
  protocol.set_str("Example");
  EXPECT_EQ(protocol.str(), "Test Example");
}

}  // namespace
}  // namespace protocol
