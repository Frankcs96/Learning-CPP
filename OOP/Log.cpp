#include <iostream>
// We are going to create a videogame log class
class Log {
public:

  enum Level {
    levelError, levelWarning, levelInfo
  };
private:
  Level m_LogLevelM = levelInfo;


public:

  void setLevel(Level level) {
    m_LogLevelM = level;
  }

  void warn(const char* message) {
    if (m_LogLevelM >= levelWarning) {
      std::cout << "[WARNING]: " << message << std::endl;
    }
   
  }

  void info(const char* message) {
    if (m_LogLevelM >= levelInfo) {
      std::cout << "[INFO]: " << message << std::endl;
    }
   
  }

  void error(const char* message) {
    if (m_LogLevelM >= levelError) {
      std::cout << "[ERROR]: " << message << std::endl;
    }
    
  }

};



int main() {

  Log log;
  log.setLevel(Log::levelError);
  log.warn("Hello");
  log.info("Hello");
  log.error("Hello");
  std::cin.get();
}