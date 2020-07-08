#include "App.h"
#include <sstream>
#include <iomanip>
#include <thread>
#include <chrono>

App::App()
	: 
	wnd(1280,720,"Text To Screen")
{
}

int App::Go()
{
	
	while (true)
	{
		if (const auto ecode = Window::ProcessMessages())
		{
			return *ecode;
		}
		DoFrame();
	}
	
	
}

void App::DoFrame()
{
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(0.0016s);
	const float t = timer.Peek();
	std::ostringstream oss;
	oss << "Time: " << std::setprecision(2)<< std::fixed << t;
	wnd.SetWindowTitle(oss.str());
}
