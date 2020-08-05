#include "JoinRouteController.h"
#include "Router.h"

JoinRouteController::JoinRouteController(Window* _window) :Controller{ _window }
{
	model = new JoinRouteModel;
	view = new JoinRouteView{ _window, this, model };

	view->mount();
	view->bind();
}

void JoinRouteController::switchToLoginRoute()
{
	Router::getInstance()->switchToLoginRoute();
}

void JoinRouteController::dismount()
{
	view->dismount();
}
