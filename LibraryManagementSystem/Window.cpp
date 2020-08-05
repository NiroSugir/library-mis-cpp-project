#include "Window.h"
#include "constants.h"

Window::Window() : wxFrame{
	// parent
	nullptr,
	// pid of the app
	wxID_ANY,
	// title
	APP_NAME + ": Loading...",
	// location of top corner
	// todo: center on the screen
	wxPoint{ 100, 50 }
} {
}
