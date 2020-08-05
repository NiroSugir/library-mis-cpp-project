#pragma once

#include "Controller.h"
#include "JoinRouteView.h"
#include "JoinRouteModel.h"

class JoinRouteModel;
class JoinRouteView;

class JoinRouteController : public Controller
{
	JoinRouteModel* model{ nullptr };
	JoinRouteView* view{ nullptr };

public:
	JoinRouteController(Window* _window);

	void switchToLoginRoute();

	void dismount();
};
