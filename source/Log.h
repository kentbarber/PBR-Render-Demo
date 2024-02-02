#ifndef LOG_H
#define LOG_H
#include<iostream>
#include<string>
#include<time.h>

class Timer {
public:
	static std::string getTime() {
		std::string s;
		char str[60];
		time_t t = time(NULL);
		tm * local_time = localtime(&t);
		sprintf(str, "[%d-%02d-%02d %02d:%02d:%02d]", local_time->tm_year + 1900, local_time->tm_mon + 1,
			local_time->tm_mday, local_time->tm_hour, local_time->tm_min, local_time->tm_sec);
		//	cout << "str:" << str << endl;
		s = str;
		return s;
	}
};
class Log {
public:

	static void msg(std::string str) {
		std::cout << "Log" << Timer::getTime() << ":" << str << std::endl;
	}

};

#endif