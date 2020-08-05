#include "cApp.h"

bool cApp::OnInit()
{
	Router* r = Router::getInstance();
	r->switchToLoginRoute();

	return true;
}
