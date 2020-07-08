#pragma once
#include "Window.h"
#include "SystemTimer.h"

class App
{
public: 
	App();
	int Go();
private:
	void DoFrame();

private:
	Window wnd;
	SystemTimer timer;
};

