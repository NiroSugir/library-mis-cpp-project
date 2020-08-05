#pragma once

#include "wx/wx.h"
#include "Window.h"
#include "Router.h"

class cApp :public wxApp
{
private:
	Window* window{ nullptr };

public:
	bool OnInit();

	// clean up all objects created by the app
	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	//int onExit()
	//{
	//	//if (window) {
	//	//	delete window;
	//	//	window = nullptr;
	//	//}

	//	return 0;
	//}
};
