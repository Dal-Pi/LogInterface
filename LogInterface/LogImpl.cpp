#include "LogInterface.h"

#include <iostream>

namespace loginterface {
	void printLog(const DEBUG_LEVEL level, const std::string& logString) {
		std::cout << "[" << static_cast<DebugLevelType>(level) << "]" << logString << std::endl;
	}
}