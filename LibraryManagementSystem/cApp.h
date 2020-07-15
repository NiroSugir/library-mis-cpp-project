#pragma once

#include "wx/wx.h"
#include "IntroductionWindow.h"

class cApp:public wxApp
{
private:
	IntroductionWindow* introduction_window{nullptr};

public:
	cApp();
	~cApp();

	virtual bool OnInit();
};

