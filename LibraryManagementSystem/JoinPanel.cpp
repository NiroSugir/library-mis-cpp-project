#include "JoinPanel.h"

JoinPanel::JoinPanel(wxWindow* _parent, IntroductionWindow* _i) : intro{ _i }, wxPanel{ _parent, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ WIDTH, HEIGHT } }
{
	// bind button click events
	btn_join->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onEnterClicked, this, wxID_ANY);
	btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onClearClicked, this, wxID_ANY);
	btn_back->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onBackClicked, this, wxID_ANY);

	txt_first_name->SetHint("First Name");
	txt_last_name->SetHint("Last Name");
	txt_username->SetHint("Username");
	txt_password->SetHint("Password");
	txt_password_verify->SetHint("Verify Password");

	txt_username->SetFocus();

	title->SetFont(title_font);
	txt_first_name->SetFont(textbox_font);
	txt_last_name->SetFont(textbox_font);
	txt_username->SetFont(textbox_font);
	txt_password->SetFont(textbox_font);
	txt_password_verify->SetFont(textbox_font);
	btn_back->SetFont(back_button_font);
	copyright_message->SetFont(copyright_font);
}

void JoinPanel::onEnterClicked(wxCommandEvent& evt)
{
	// do not propagate event
	evt.Skip();
}

void JoinPanel::onClearClicked(wxCommandEvent& evt)
{
	txt_first_name->SetValue("");
	txt_last_name->SetValue("");
	txt_username->SetValue("");
	txt_password->SetValue("");
	txt_password_verify->SetValue("");

	txt_first_name->SetFocus();

	// do not propagate event
	evt.Skip();
}

void JoinPanel::onBackClicked(wxCommandEvent& evt)
{
	intro->switchToSignInPanel();
}

JoinPanel::~JoinPanel()
{
	// Note: DO NOT delete pointers. Framework will manually delete when their parent frames get unset.

	//unbind button click events
	btn_join->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onEnterClicked, this, wxID_ANY);
	btn_clear->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onClearClicked, this, wxID_ANY);
}