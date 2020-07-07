#include "Window.h"

int CALLBACK WinMain(
	HINSTANCE hInstance, 
	HINSTANCE hPrevInstance, 
	LPSTR	  lpCmdLine,
	int		  nCmdShow)

{
	try
	{	
		Window wnd(800, 600, "This Is A Window");

		MSG msg;
		BOOL gResult;
		while (gResult = GetMessage(&msg, nullptr, 0, 0) > 0)
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		if (gResult == -1)
		{
			return -1;
		}
		return msg.wParam;
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
		MessageBox(nullptr, "No details available","Unkown Exception" , MB_OK | MB_ICONERROR);
	}
}


