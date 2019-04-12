#ifndef PROTOCOL_PROTOCOL_H_
#define PROTOCOL_PROTOCOL_H_

#include <string>

namespace protocol {

class Protocol {
 public:
  inline std::string str() const { return str_; }
  void set_str(const std::string& str);

 private:
  std::string str_;
};

}  // namespace protocol

#endif  // PROTOCOL_PROTOCOL_H_
