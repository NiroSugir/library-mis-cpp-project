#pragma once

#include "wx/wx.h"
#include "IntroductionWindow.h"

class cApp :public wxApp
{
private:
	IntroductionWindow* introduction_window{ nullptr };

public:
	virtual bool OnInit()
	{
		introduction_window = new IntroductionWindow();
		introduction_window->Show();

		return true;
	}
};

