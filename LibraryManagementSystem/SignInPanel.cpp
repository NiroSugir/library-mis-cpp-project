#include "SignInPanel.h"

SignInPanel::SignInPanel(wxWindow* _parent, IntroductionWindow* _i) : intro{ _i }, wxPanel{ _parent, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ WIDTH, HEIGHT } }
{
	// bind button click events
	btn_enter->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
	btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);
	btn_join->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onJoinClicked, this, wxID_ANY);

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

void SignInPanel::onEnterClicked(wxCommandEvent& evt)
{
	// do not propagate event
	evt.Skip();
}

void SignInPanel::onClearClicked(wxCommandEvent& evt)
{
	txt_username->SetValue("");
	txt_password->SetValue("");

	txt_username->SetFocus();

	// do not propagate event
	evt.Skip();
}

void SignInPanel::onJoinClicked(wxCommandEvent& evt)
{
	intro->switchToJoinPanel();
}

SignInPanel::~SignInPanel()
{
	// Note: DO NOT delete pointers. Framework will manually delete when their parent frames get unset.

	//unbind button click events
	btn_enter->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
	btn_clear->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);
	btn_join->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);

}