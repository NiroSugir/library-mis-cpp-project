#pragma once

#include <memory>
#include "wx/wx.h"
#include "wx/statline.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION_JOIN(_x, _y)(wxPoint{_x - 260, _y - (799 + 30)})

class JoinPanel : public wxPanel
{
private:
	// screen elements
	wxStaticText* title{ new wxStaticText{this, wxID_ANY, "Join",  MOCKUP_POSITION_JOIN(296, 853) , wxSize{ 84, 36 } } };

	wxStaticText* label_first_name{ new wxStaticText{this, wxID_ANY, "First Name:", MOCKUP_POSITION_JOIN(296, 913 - 18), wxSize{ 120, 15 } } };
	wxTextCtrl* txt_first_name{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 913), wxSize{ 120, 25 }, wxTE_CENTER } };

	wxStaticText* label_last_name{ new wxStaticText{this, wxID_ANY, "Last Name:", MOCKUP_POSITION_JOIN(423, 913 - 18), wxSize{ 120, 15 } } };
	wxTextCtrl* txt_last_name{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_JOIN(423, 913), wxSize{ 120, 25 }, wxTE_CENTER } };

	wxStaticText* label_username{ new wxStaticText{this, wxID_ANY, "Username:", MOCKUP_POSITION_JOIN(296, 969 - 18), wxSize{ 234, 15 } } };
	wxTextCtrl* txt_username{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 969), wxSize{ 248, 25 }, wxTE_CENTER } };

	wxStaticText* label_password{ new wxStaticText{this, wxID_ANY, "Password:", MOCKUP_POSITION_JOIN(296, 1025 - 18), wxSize{ 234, 15 } } };
	wxTextCtrl* txt_password{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 1025), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	wxStaticText* label_password_verify{ new wxStaticText{this, wxID_ANY, "Verify Password:", MOCKUP_POSITION_JOIN(296, 1081 - 18), wxSize{ 234, 15 } } };
	wxTextCtrl* txt_password_verify{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 1081), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	wxButton* btn_join{ new wxButton{this, wxID_ANY, "Join", MOCKUP_POSITION_JOIN(296, 1137), wxSize{ 120, 32 } } };
	wxButton* btn_clear{ new wxButton{this, wxID_ANY, "Clear", MOCKUP_POSITION_JOIN(424, 1137), wxSize{ 120, 32 } } };

	wxStaticLine* seperator{ new wxStaticLine{this, wxID_ANY, MOCKUP_POSITION_JOIN(319, 1193), wxSize{198, 1}, wxLI_HORIZONTAL} };

	wxStaticText* signin_message{ new wxStaticText{this, wxID_ANY, "Already a member? Go back to sign in.", MOCKUP_POSITION_JOIN(296, 1218), wxSize{ 248, 23 } } };
	wxButton* btn_back{ new wxButton{this, wxID_ANY, "Back to Sign In", MOCKUP_POSITION_JOIN(296, 1246), wxSize{ 248, 47} } };

	wxStaticText* copyright_message{ new wxStaticText{this, wxID_ANY, "Copyright 2020 by Niroshan Sugirtharatnam.\nAll Rights Reserved.", MOCKUP_POSITION_JOIN(296, 1317), wxSize{ 249, 29 }, wxTE_CENTER } };


	// todo: set correct fonts
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	//wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont back_button_font{ 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont copyright_font{ 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	JoinPanel(wxWindow* _parent);

	void onEnterClicked(wxCommandEvent& evt);

	void onClearClicked(wxCommandEvent& evt);

	~JoinPanel();
};
