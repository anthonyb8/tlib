#include "tlib/core.hpp"

namespace tlib::core {

std::string get_greeting(const std::string& name) {
  return "Hello, " + name + "this is from tlib core!";
}
};  // namespace tlib::core
