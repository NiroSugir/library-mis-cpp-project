#pragma once

#include "wx/wx.h"
//#include "SignInPanel.h"
//#include "JoinPanel.h"

class IntroductionWindow : public wxFrame
{
private:
	wxPanel* sign_in_panel{ nullptr };
	wxPanel* join_panel{ nullptr };

public:
	// todo: retrive the application name from a constant
	IntroductionWindow();

	void switchToSignInPanel();

	void switchToJoinPanel();

	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	~IntroductionWindow();
};
