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
	if (join_panel) {
		join_panel->Hide();
	}

	sign_in_panel = new SignInPanel{ this, this };
	sign_in_panel->Hide();
	sign_in_panel->populatePanel();
	this->SetSize(SignInPanel::WIDTH, SignInPanel::HEIGHT);
	sign_in_panel->ShowWithEffect(wxSHOW_EFFECT_ROLL_TO_RIGHT, TRANSITION_TIME);
}

void IntroductionWindow::switchToJoinPanel()
{
	if (sign_in_panel) {
		sign_in_panel->Hide();
	}

	join_panel = new JoinPanel{ this, this };
	join_panel->Hide();
	join_panel->populatePanel();
	this->SetSize(JoinPanel::WIDTH, JoinPanel::HEIGHT);
	join_panel->ShowWithEffect(wxSHOW_EFFECT_ROLL_TO_LEFT, TRANSITION_TIME);
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