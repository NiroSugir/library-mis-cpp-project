#pragma once

#include <memory>
#include "wx/wx.h"
#include "wx/statline.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION(_x, _y)(wxPoint{_x - 260, _y - (799 + 30)})

using std::unique_ptr;

class JoinPanel : public wxPanel
{
private:
	// screen elements
	unique_ptr<wxStaticText> title{ new wxStaticText{this, wxID_ANY, "Join",  MOCKUP_POSITION(296, 853) , wxSize{ 84, 36 } } };

	unique_ptr<wxStaticText> label_first_name{ new wxStaticText{this, wxID_ANY, "First Name:", MOCKUP_POSITION(296, 913 - 18), wxSize{ 120, 15 } } };
	unique_ptr<wxTextCtrl> txt_first_name{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(296, 913), wxSize{ 120, 25 }, wxTE_CENTER } };

	unique_ptr<wxStaticText> label_last_name{ new wxStaticText{this, wxID_ANY, "Last Name:", MOCKUP_POSITION(423, 913 - 18), wxSize{ 120, 15 } } };
	unique_ptr<wxTextCtrl> txt_last_name{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(423, 913), wxSize{ 120, 25 }, wxTE_CENTER } };

	unique_ptr<wxStaticText> label_username{ new wxStaticText{this, wxID_ANY, "Username:", MOCKUP_POSITION(296, 969 - 18), wxSize{ 234, 15 } } };
	unique_ptr<wxTextCtrl> txt_username{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(296, 969), wxSize{ 248, 25 }, wxTE_CENTER } };

	unique_ptr<wxStaticText> label_password{ new wxStaticText{this, wxID_ANY, "Password:", MOCKUP_POSITION(296, 1025 - 18), wxSize{ 234, 15 } } };
	unique_ptr<wxTextCtrl> txt_password{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(296, 1025), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	unique_ptr<wxStaticText> label_password_verify{ new wxStaticText{this, wxID_ANY, "Verify Password:", MOCKUP_POSITION(296, 1081 - 18), wxSize{ 234, 15 } } };
	unique_ptr<wxTextCtrl> txt_password_verify{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(296, 1081), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	unique_ptr<wxButton> btn_join{ new wxButton{this, wxID_ANY, "Join", MOCKUP_POSITION(296, 1137), wxSize{ 120, 32 } } };
	unique_ptr<wxButton> btn_clear{ new wxButton{this, wxID_ANY, "Clear", MOCKUP_POSITION(424, 1137), wxSize{ 120, 32 } } };

	unique_ptr<wxStaticLine> seperator{ new wxStaticLine{this, wxID_ANY, MOCKUP_POSITION(319, 1193), wxSize{198, 1}, wxLI_HORIZONTAL} };

	unique_ptr<wxStaticText> signin_message{ new wxStaticText{this, wxID_ANY, "Already a member? Go back to sign in.", MOCKUP_POSITION(296, 1218), wxSize{ 248, 23 } } };
	unique_ptr<wxButton> btn_back{ new wxButton{this, wxID_ANY, "Back to Sign In", MOCKUP_POSITION(296, 1246), wxSize{ 248, 47} } };

	unique_ptr<wxStaticText> copyright_message{ new wxStaticText{this, wxID_ANY, "Copyright 2020 by Niroshan Sugirtharatnam.\nAll Rights Reserved.", MOCKUP_POSITION(296, 1317), wxSize{ 249, 29 }, wxTE_CENTER } };


	// todo: set correct fonts
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	//wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont back_button_font{ 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont copyright_font{ 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	JoinPanel(wxWindow* _parent) :wxPanel{ _parent, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ WIDTH, HEIGHT } }
	{
		// bind button click events
		btn_join->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onClearClicked, this, wxID_ANY);

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

	void onEnterClicked(wxCommandEvent& evt)
	{
		// do not propagate event
		evt.Skip();
	}

	void onClearClicked(wxCommandEvent& evt)
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

	~JoinPanel()
	{
		//unbind button click events
		btn_join->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinPanel::onClearClicked, this, wxID_ANY);
	}
};
