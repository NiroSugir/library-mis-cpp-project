#include "JoinRouteView.h"

JoinRouteView::JoinRouteView(Window* _window, JoinRouteModel* _model) : wxPanel{ _window, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ 316, 578} }, model{ _model } {
	_window->SetSize(wxSize{ 316, 578 });
}

void JoinRouteView::mount() {
	title = new wxStaticText{ this, wxID_ANY, "Join",  MOCKUP_POSITION_JOIN(296, 853) , wxSize{ 84, 36 } };

	label_first_name = new wxStaticText{ this, wxID_ANY, "First Name:", MOCKUP_POSITION_JOIN(296, 913 - 18), wxSize{ 120, 15 } };
	txt_first_name = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 913), wxSize{ 120, 25 }, wxTE_CENTER };
	txt_first_name->SetHint("First Name");

	label_last_name = new wxStaticText{ this, wxID_ANY, "Last Name:", MOCKUP_POSITION_JOIN(423, 913 - 18), wxSize{ 120, 15 } };
	txt_last_name = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_JOIN(423, 913), wxSize{ 120, 25 }, wxTE_CENTER };
	txt_last_name->SetHint("Last Name");

	label_username = new wxStaticText{ this, wxID_ANY, "Username:", MOCKUP_POSITION_JOIN(296, 969 - 18), wxSize{ 234, 15 } };
	txt_username = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 969), wxSize{ 248, 25 }, wxTE_CENTER };
	txt_username->SetHint("Username");

	label_password = new wxStaticText{ this, wxID_ANY, "Password:", MOCKUP_POSITION_JOIN(296, 1025 - 18), wxSize{ 120, 15 } };
	txt_password = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_JOIN(296, 1025), wxSize{ 120, 25 }, wxTE_CENTER | wxTE_PASSWORD };
	txt_password->SetHint("Password");

	label_password_verify = new wxStaticText{ this, wxID_ANY, "Verify Password:", MOCKUP_POSITION_JOIN(423, 1025 - 18), wxSize{ 120, 15 } };
	txt_password_verify = new wxTextCtrl{ this, wxID_ANY, "", MOCKUP_POSITION_JOIN(423, 1025), wxSize{ 120, 25 }, wxTE_CENTER | wxTE_PASSWORD };
	txt_password_verify->SetHint("Verify Password");

	label_membership_type = new wxStaticText{ this, wxID_ANY, "Membership Type:", MOCKUP_POSITION_JOIN(296, 1081 - 18), wxSize{ 234, 15 } };
	cbo_membership_type = new wxChoice{ this, wxID_ANY, MOCKUP_POSITION_JOIN(296, 1081), wxSize{ 248, 25 } };
	vector<string> membership_types{ model->get_membership_types() };
	for (vector<string>::size_type i = 0; i != membership_types.size(); i++) {
		cbo_membership_type->Insert(membership_types[i], i);
	}
	cbo_membership_type->SetSelection(0);

	btn_join = new wxButton{ this, wxID_ANY, "Join", MOCKUP_POSITION_JOIN(296, 1137), wxSize{ 120, 32 } };
	btn_clear = new wxButton{ this, wxID_ANY, "Clear", MOCKUP_POSITION_JOIN(424, 1137), wxSize{ 120, 32 } };

	seperator = new wxStaticLine{ this, wxID_ANY, MOCKUP_POSITION_JOIN(319, 1193), wxSize{198, 1}, wxLI_HORIZONTAL };

	signin_message = new wxStaticText{ this, wxID_ANY, "Already a member? Go back to sign in.", MOCKUP_POSITION_JOIN(296, 1218), wxSize{ 248, 23 } };
	btn_back = new wxButton{ this, wxID_ANY, "Back to Sign In", MOCKUP_POSITION_JOIN(296, 1246), wxSize{ 248, 47} };

	copyright_message = new wxStaticText{ this, wxID_ANY, "Copyright 2020 by Niroshan Sugirtharatnam.\nAll Rights Reserved.", MOCKUP_POSITION_JOIN(296, 1317), wxSize{ 249, 29 }, wxTE_CENTER };


	title->SetFont(title_font);
	txt_first_name->SetFont(textbox_font);
	txt_last_name->SetFont(textbox_font);
	txt_username->SetFont(textbox_font);
	txt_password->SetFont(textbox_font);
	txt_password_verify->SetFont(textbox_font);
	btn_back->SetFont(back_button_font);
	copyright_message->SetFont(copyright_font);

	txt_first_name->SetFocus();
}

void JoinRouteView::bind() {
	// bind button click events
	btn_join->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinRouteView::onEnterClicked, this, wxID_ANY);
	btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinRouteView::onClearClicked, this, wxID_ANY);
	btn_back->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &JoinRouteView::onBackClicked, this, wxID_ANY);
}


void JoinRouteView::onEnterClicked(wxCommandEvent& evt)
{
	// do not propagate event
	evt.Skip();
}

void JoinRouteView::onClearClicked(wxCommandEvent& evt)
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

void JoinRouteView::onBackClicked(wxCommandEvent& evt)
{
	//Router* r = Router::getInstance();

	// todo: implement routing to different screens
	//r->switchToSignInPanel();
}