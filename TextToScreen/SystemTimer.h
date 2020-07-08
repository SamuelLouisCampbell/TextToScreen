#pragma once
#include <chrono>

class SystemTimer
{
public:
	SystemTimer();
	float Mark();
	float Peek() const;

private:
	std::chrono::steady_clock::time_point last;

};

