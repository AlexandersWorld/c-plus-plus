#include <iostream>
#include "Log.h"

void InitLog()
{
	Log(123);
}

void Log(int message)
{
	std::cout << message << std::endl;
}