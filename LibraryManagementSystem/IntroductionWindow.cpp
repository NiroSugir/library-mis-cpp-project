#include "IntroductionWindow.h"
#include "SignInPanel.h"
#include "JoinPanel.h"

// todo: retrive the application name from a constant
IntroductionWindow::IntroductionWindow() : wxFrame{
	// parent
	nullptr,
	// pid of the app
	wxID_ANY,
	// title
	"Placeholder Application Name",
	// location of top corner
	// todo: center on the screen
	wxPoint{ 100, 50 }
} {
	this->switchToSignInPanel();
}

void IntroductionWindow::switchToSignInPanel()
{
	sign_in_panel = new SignInPanel{ this, this };
	this->SetSize(SignInPanel::WIDTH, SignInPanel::HEIGHT);
}

void IntroductionWindow::switchToJoinPanel()
{
	join_panel = new JoinPanel{ this };
	this->SetSize(JoinPanel::WIDTH, JoinPanel::HEIGHT);
}

// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
IntroductionWindow::~IntroductionWindow()
{
	if (sign_in_panel) {
		delete sign_in_panel;
		sign_in_panel = nullptr;
	}

	if (join_panel) {
		delete join_panel;
		join_panel = nullptr;
	}
}