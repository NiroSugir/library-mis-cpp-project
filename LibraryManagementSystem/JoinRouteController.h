#pragma once

#include "Controller.h"
#include "JoinRouteView.h"
#include "JoinRouteModel.h"

class JoinRouteController : public Controller
{
	JoinRouteModel* model{ nullptr };
	JoinRouteView* view{ nullptr };

public:
	JoinRouteController(Window* _window) :Controller{ _window }
	{
		JoinRouteModel* model = new JoinRouteModel;
		JoinRouteView* view = new JoinRouteView{ _window, model };

		view->mount();
		view->bind();
	}

	void dismount() {
		//view->dismount();
	}
};
