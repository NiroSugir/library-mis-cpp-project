#pragma once

#include "wx/wx.h"
#include "SignInPanel.h"

class IntroductionWindow : public wxFrame
{
private:
	SignInPanel* sign_in_panel{ nullptr };

	void switchToSignInPanel()
	{
		sign_in_panel = new SignInPanel(this);
	}

public:
	// todo: retrive the application name from a constant
	IntroductionWindow() : wxFrame(
		// parent
		nullptr,
		// pid of the app
		wxID_ANY,
		// title
		"Placeholder Application Name",
		// location of top corner
		// todo: center on the screen
		wxPoint(100, 50)
	) {
		this->SetSize(SignInPanel::WIDTH, SignInPanel::HEIGHT);
		this->switchToSignInPanel();
	}

	~IntroductionWindow()
	{
		if (sign_in_panel) {
			delete sign_in_panel;
			sign_in_panel = nullptr;
		}
	}
};

