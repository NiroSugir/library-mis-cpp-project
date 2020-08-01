#pragma once

#include "wx/wx.h"

class GuestPanelBase : public wxPanel
{
public:
	GuestPanelBase(wxWindow* _parent, int _width_, int _height) : wxPanel{ _parent, wxID_ANY, wxPoint{ 0, 0 }, wxSize{ _width_, _height} } {}

	void virtual populatePanel() = 0;
};

