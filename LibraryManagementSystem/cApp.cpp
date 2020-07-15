#include "cApp.h"

cApp::cApp() {}

cApp::~cApp() {}

bool cApp::OnInit()
{
	introduction_window = new IntroductionWindow();
	introduction_window->Show();

	return true;
}