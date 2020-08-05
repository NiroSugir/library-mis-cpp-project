#include "JoinRouteController.h"

JoinRouteController::JoinRouteController(Window* _window) :Controller{ _window }
{
	JoinRouteModel* model = new JoinRouteModel;
	JoinRouteView* view = new JoinRouteView{ _window, model };

	view->mount();
	view->bind();
}