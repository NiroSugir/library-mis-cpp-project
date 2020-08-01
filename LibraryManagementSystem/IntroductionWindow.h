#pragma once

#include "wx/wx.h"
#include "GuestPanelBase.h";
//#include "SignInPanel.h"
//#include "JoinPanel.h"

class IntroductionWindow : public wxFrame
{
private:
	GuestPanelBase* sign_in_panel{ nullptr };
	GuestPanelBase* join_panel{ nullptr };

public:
	// todo: retrive the application name from a constant
	IntroductionWindow();

	void switchToSignInPanel();

	void switchToJoinPanel();

	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	~IntroductionWindow();
};
