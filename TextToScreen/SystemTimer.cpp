#include "SystemTimer.h"

using namespace std::chrono;

SystemTimer::SystemTimer()
{
	last = steady_clock::now();
}

float SystemTimer::Mark()
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float SystemTimer::Peek() const
{
	return duration<float>(steady_clock::now() - last).count();
}
