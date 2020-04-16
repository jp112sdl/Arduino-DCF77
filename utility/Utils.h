#ifndef Utils_h
#define Utils_h

#if ARDUINO >= 100
#include <Arduino.h> 
#else
#include <WProgram.h> 
#endif
#include <TimeLib.h>


namespace Utils {	
	void Log(const char*s);
	void LogLn(const char*s);
	void Log(int i,char format);
	void LogLn(int i,char format);
	void Log(int i);
	void LogLn(int i);
	void BlinkDebug(uint8_t pin, uint8_t state);
}

#endif
