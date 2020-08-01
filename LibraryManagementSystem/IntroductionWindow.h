#pragma once

#include "wx/wx.h"
#include "GuestPanelBase.h";

class IntroductionWindow : public wxFrame
{
private:
	GuestPanelBase* sign_in_panel{ nullptr };
	GuestPanelBase* join_panel{ nullptr };

	static const int TRANSITION_TIME = 120;

public:
	// todo: retrive the application name from a constant
	IntroductionWindow();

	void switchToSignInPanel();

	void switchToJoinPanel();

	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	~IntroductionWindow();
};
