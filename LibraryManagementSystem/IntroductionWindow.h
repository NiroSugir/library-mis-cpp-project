#pragma once

#include "wx/wx.h"
#include "SignInPanel.h"

class IntroductionWindow : public wxFrame
{
private:
	const int WIDTH{ 316 };
	const int HEIGHT{ 578 };

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
		this->SetSize(WIDTH, HEIGHT);
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

