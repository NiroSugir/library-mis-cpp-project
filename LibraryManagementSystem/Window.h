#pragma once

#include "wx/wx.h"
#include "GuestPanelBase.h";

class Window : public wxFrame
{
private:
	GuestPanelBase* sign_in_panel{ nullptr };
	GuestPanelBase* join_panel{ nullptr };

public:
	// todo: retrive the application name from a constant
	Window();

	void switchToSignInPanel();

	void switchToJoinPanel();

	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
	~Window();
};
