#include "Window.h"
//#include "SignInPanel.h"
//#include "JoinPanel.h"
#include "constants.h"

// todo: retrive the application name from a constant
Window::Window() : wxFrame{
	// parent
	nullptr,
	// pid of the app
	wxID_ANY,
	// title
	APP_NAME + ": Guest View",
	// location of top corner
	// todo: center on the screen
	wxPoint{ 100, 50 }
} {
	//this->switchToSignInPanel();
}

//void Window::switchToSignInPanel()
//{
//	if (join_panel) {
//		join_panel->Hide();
//	}
//
//	sign_in_panel = new SignInPanel{ this, this };
//	sign_in_panel->Hide();
//	sign_in_panel->populatePanel();
//	this->SetSize(SignInPanel::WIDTH, SignInPanel::HEIGHT);
//	sign_in_panel->Show();
//}
//
//void Window::switchToJoinPanel()
//{
//	if (sign_in_panel) {
//		sign_in_panel->Hide();
//	}
//
//	join_panel = new JoinPanel{ this, this };
//	join_panel->Hide();
//	join_panel->populatePanel();
//	this->SetSize(JoinPanel::WIDTH, JoinPanel::HEIGHT);
//	join_panel->Show();
//}
//
//// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
//Window::~Window()
//{
//	if (sign_in_panel) {
//		delete sign_in_panel;
//		sign_in_panel = nullptr;
//	}
//
//	if (join_panel) {
//		delete join_panel;
//		join_panel = nullptr;
//	}
//}

