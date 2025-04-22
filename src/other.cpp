#include "tlib/other.hpp"

namespace tlib::other {

std::string get_greeting(const std::string& name) {
  return "Hello, " + name + "this is from tlib other !";
}
};  // namespace tlib::other
