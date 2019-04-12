#include "protocol/protocol.h"

#include "absl/strings/str_format.h"

namespace protocol {

void Protocol::set_str(const std::string& str) {
  str_ = absl::StrFormat("Test %s", str);
}

}  // namespace protocol
