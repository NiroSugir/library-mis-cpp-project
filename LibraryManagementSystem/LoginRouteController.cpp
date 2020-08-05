#include "LoginRouteController.h"

LoginRouteController::LoginRouteController(Window* _window) :Controller{ _window }
{
	LoginRouteModel* model = new LoginRouteModel;
	LoginRouteView* view = new LoginRouteView{ _window, model };

	view->mount();
	view->bind();
}