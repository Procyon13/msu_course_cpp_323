#pragma once

#include <fstream>
namespace uni_course_cpp {
class Logger {
 public:
  void log(const std::string& string);

  ~Logger();

  static Logger& getLogger();

 private:
  Logger();
  std::ofstream file_stream_;
  Logger(const Logger&) = delete;
  Logger& operator=(const Logger&) = delete;
  Logger(Logger&&) = delete;
  Logger& operator=(Logger&&) = delete;
};
}  // namespace uni_course_cpp
