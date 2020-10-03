#ifndef LOGINTERFACE
#define LOGINTERFACE

#include <string>
#include <sstream>
#include <iomanip>

namespace loginterface {
	using DebugLevelType = char;
	enum class DEBUG_LEVEL : DebugLevelType {
		ERROR = 'E',
		WARNING = 'W',
		INFO = 'I',
		VERVOSE = 'V'
	};

	void printLog(DEBUG_LEVEL level, const std::string& logString);
}

#define __PRINT_LOG__(__level, __logStream)\
{\
	std::ostringstream __oss;\
	__oss << "[" << __func__ << "]";\
	__oss << __logStream;\
	const std::string& __str = __oss.str();\
	loginterface::printLog(__level, __str);\
}

#define Log_e(__logStream) __PRINT_LOG__(loginterface::DEBUG_LEVEL::ERROR, __logStream)
#define Log_w(__logStream) __PRINT_LOG__(loginterface::DEBUG_LEVEL::WARNING, __logStream)
#define Log_i(__logStream) __PRINT_LOG__(loginterface::DEBUG_LEVEL::INFO, __logStream)
//#define Log_v(__logStream) __PRINT_LOG__(loginterface::DEBUG_LEVEL::VERVOSE, logStream)
#define Log_v(__logStream) ;

#endif