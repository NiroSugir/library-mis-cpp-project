#pragma once

#include <memory>
#include "wx/wx.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION(_x, _y)(wxPoint{_x - 260, _y - (96 + 30)})

using std::unique_ptr;

class SignInPanel : public wxPanel
{
private:
	// screen elements
	unique_ptr<wxStaticText> title{ new wxStaticText{this, wxID_ANY, "Sign In",  MOCKUP_POSITION(296, 150) , wxSize{ 84, 36 } } };
	unique_ptr<wxStaticText> message{ new wxStaticText{this, wxID_ANY, "Welcome back to [library_name]!", MOCKUP_POSITION( 296, 193), wxSize{ 234, 22 } } };

	unique_ptr<wxStaticText> label_username{ new wxStaticText{this, wxID_ANY, "Username:", MOCKUP_POSITION( 296, 240 - 18), wxSize{ 234, 15 } } };
	unique_ptr<wxTextCtrl> txt_username{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION(296, 240), wxSize{ 248, 25 }, wxTE_CENTER } };

	unique_ptr<wxStaticText> label_password{ new wxStaticText{this, wxID_ANY, "Password:", MOCKUP_POSITION(296, 296 - 18), wxSize{ 234, 15 } } };
	unique_ptr<wxTextCtrl> txt_password{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION( 296, 296), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	unique_ptr<wxButton> btn_enter{ new wxButton{this, wxID_ANY, "Enter", MOCKUP_POSITION( 295, 352), wxSize{ 120, 32 } } };
	unique_ptr<wxButton> btn_clear{ new wxButton{this, wxID_ANY, "Clear", MOCKUP_POSITION( 424, 352), wxSize{ 120, 32 } } };

	// todo: set correct fonts
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	SignInPanel(wxWindow* _parent) :wxPanel{ _parent, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ WIDTH, HEIGHT } }
	{
		// bind button click events
		btn_enter->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);

		txt_username->SetHint("Username");
		txt_password->SetHint("Password");

		txt_username->SetFocus();

		title->SetFont(title_font);
		message->SetFont(message_font);
		txt_username->SetFont(textbox_font);
		txt_password->SetFont(textbox_font);
	}

	void onEnterClicked(wxCommandEvent& evt)
	{
		// do not propagate event
		evt.Skip();
	}

	void onClearClicked(wxCommandEvent& evt)
	{
		txt_username->SetValue("");
		txt_password->SetValue("");

		txt_username->SetFocus();

		// do not propagate event
		evt.Skip();
	}

	~SignInPanel()
	{
		//unbind button click events
		btn_enter->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);
	}
};
