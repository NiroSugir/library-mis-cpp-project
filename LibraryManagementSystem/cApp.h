#pragma once

#include "wx/wx.h"
#include "Window.h"
#include "Router.h"

class cApp :public wxApp
{
private:
	Window* introduction_window{ nullptr };

public:
	bool OnInit()
	{
		/*	introduction_window = new IntroductionWindow;
			introduction_window->Show(true);*/

			// bring the screen to the front 
			//introduction_window->Raise();		//introduction_window->Raise();

		Router* r = Router::getInstance();

		return true;
	}

	// clean up all objects created by the app
	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	//int onExit()
	//{
	//	//if (introduction_window) {
	//	//	delete introduction_window;
	//	//	introduction_window = nullptr;
	//	//}

	//	return 0;
	//}

};

