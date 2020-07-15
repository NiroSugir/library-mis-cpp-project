#pragma once

#include "wx/wx.h"

class IntroductionWindow: public wxFrame
{
private:
	const int WIDTH{ 316 };
	const int HEIGHT{ 578 };

public:
	// todo: retrive the application name from a constant
	IntroductionWindow() :wxFrame(
		// parent
		nullptr, 
		// pid of the app
		wxID_ANY, 
		// title
		"Placeholder Application Name",
		// location of top corner
		// todo: center on the screen
		wxPoint(100, 50),
		// size
		wxSize(WIDTH, HEIGHT)
		) {
	}
};

