#include "App.h"
#include <sstream>
#include <iomanip>
#include <thread>
#include <chrono>

App::App()
	: 
	wnd(800,500,"Text To Screen")
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
	const float g = sin(timer.Peek()) / 2.0f + 0.5f;

	float posX = 0.0f;
	if (wnd.mouse.GetPosX() != 0)
	{
		posX = 1.0f /(1280.0f / (float)wnd.mouse.GetPosX());
	}
	float posY = 0.0f;
	if (wnd.mouse.GetPosY() != 0)
	{
		posY = 1.0f / (720.0f / (float)wnd.mouse.GetPosY());
	}
	wnd.Gfx().ClearBackBuffer(posX, g, posY);


	using namespace std::chrono_literals;
	std::this_thread::sleep_for(0.0016s);
	const float t = timer.Peek();
	std::ostringstream oss;
	oss << "Time: " << std::setprecision(2)<< std::fixed << t;
	wnd.SetWindowTitle(oss.str());
	wnd.Gfx().EndFrame();
}
