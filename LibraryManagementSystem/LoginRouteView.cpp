#include "LoginRouteView.h"

void LoginRouteView::onEnterClicked(wxCommandEvent& evt)
{
	// do not propagate event
	evt.Skip();
}

void LoginRouteView::onClearClicked(wxCommandEvent& evt)
{
	txt_username->SetValue("");
	txt_password->SetValue("");

	txt_username->SetFocus();

	// do not propagate event
	evt.Skip();
}

void LoginRouteView::onJoinClicked(wxCommandEvent& evt)
{
	// TODO: get router to switch to join route
}

LoginRouteView::LoginRouteView(Window* _window, LoginRouteModel* _model) : wxPanel{ _window, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ WIDTH, HEIGHT } }, model{ _model } {
	_window->SetSize(wxSize{ WIDTH, HEIGHT });
}

void LoginRouteView::mount() {
	title = new wxStaticText{ this, wxID_ANY, "Sign In",  MOCKUP_POSITION_LOGIN(296, 150) , wxSize{ 84, 36 } };
	message = new wxStaticText{ this, wxID_ANY, "Welcome back to " + APP_NAME + "!", MOCKUP_POSITION_LOGIN(296, 188), wxSize{ 234, 22 } };

	label_username = new wxStaticText{ this, wxID_ANY, "Username:", MOCKUP_POSITION_LOGIN(296, 240 - 18), wxSize{ 234, 15 } };
	txt_username = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_LOGIN(296, 240), wxSize{ 248, 25 }, wxTE_CENTER };

	label_password = new wxStaticText{ this, wxID_ANY, "Password:", MOCKUP_POSITION_LOGIN(296, 296 - 18), wxSize{ 234, 15 } };
	txt_password = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_LOGIN(296, 296), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD };

	btn_enter = new wxButton{ this, wxID_ANY, "Enter", MOCKUP_POSITION_LOGIN(296, 352), wxSize{ 120, 32 } };
	btn_clear = new wxButton{ this, wxID_ANY, "Clear", MOCKUP_POSITION_LOGIN(424, 352), wxSize{ 120, 32 } };

	seperator = new wxStaticLine{ this, wxID_ANY, MOCKUP_POSITION_LOGIN(319, 417), wxSize{198, 1}, wxLI_HORIZONTAL };

	join_message = new wxStaticText{ this, wxID_ANY, "Not a member yet? Start by registering. Don't worry, it's free.", MOCKUP_POSITION_LOGIN(296, 435), wxSize{ 248, 37 } };
	btn_join = new wxButton{ this, wxID_ANY, "Join", MOCKUP_POSITION_LOGIN(296, 491), wxSize{ 248, 104} };

	copyright_message = new wxStaticText{ this, wxID_ANY, "Copyright 2020 by Niroshan Sugirtharatnam.\nAll Rights Reserved.", MOCKUP_POSITION_LOGIN(296, 614), wxSize{ 249, 29 }, wxTE_CENTER };


	txt_username->SetHint("Username");
	txt_password->SetHint("Password");

	txt_username->SetFocus();

	title->SetFont(title_font);
	message->SetFont(message_font);
	txt_username->SetFont(textbox_font);
	txt_password->SetFont(textbox_font);
	btn_join->SetFont(join_button_font);
	copyright_message->SetFont(copyright_font);
}

void LoginRouteView::bind() {
	// bind button click events
	btn_enter->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &LoginRouteView::onEnterClicked, this, wxID_ANY);
	btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &LoginRouteView::onClearClicked, this, wxID_ANY);
	btn_join->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &LoginRouteView::onJoinClicked, this, wxID_ANY);
}

