#include <iostream>
// We are going to create a videogame log class
class Log {

  int m_LogLevelM = logLevelInfo;


public:
  const int logLevelError = 0;
  const int logLevelWarning = 1;
  const int logLevelInfo = 2;

  void setLevel(int level) {
    m_LogLevelM = level;
  }

  void warn(const char* message) {
    if (m_LogLevelM >= logLevelWarning) {
      std::cout << "[WARNING]: " << message << std::endl;
    }
   
  }

  void info(const char* message) {
    if (m_LogLevelM >= logLevelInfo) {
      std::cout << "[INFO]: " << message << std::endl;
    }
   
  }

  void error(const char* message) {
    if (m_LogLevelM >= logLevelError) {
      std::cout << "[ERROR]: " << message << std::endl;
    }
    
  }

};



int main() {

  Log log;
  log.setLevel(log.logLevelWarning);
  log.warn("Hello");
  log.info("Hello");
  log.error("Hello");
  std::cin.get();
}