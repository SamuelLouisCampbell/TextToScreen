#include "Window.h"
#include <sstream>
#include "App.h"
int CALLBACK WinMain(
	HINSTANCE hInstance, 
	HINSTANCE hPrevInstance, 
	LPSTR	  lpCmdLine,
	int		  nCmdShow)

{
	try
	{	
		return App{}.Go(); 
	}
	catch (const SCException& e)
	{
		MessageBox(nullptr, (e.what()), (e.GetType()), MB_OK | MB_ICONERROR);
	}
	catch (const std::exception& e)
	{
		MessageBox(nullptr, (e.what()), "Standard Exception", MB_OK | MB_ICONERROR);
	}
	catch (...)
	{

	}
	return -1;
}


