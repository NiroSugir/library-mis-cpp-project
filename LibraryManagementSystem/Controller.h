#pragma once

#include<memory>
#include "Window.h"
#include "View.h"
#include "Model.h"

using std::unique_ptr;

// abstract Controller class used for assigning the views to the window
class Controller
{
protected:
	unique_ptr<Window> window{ nullptr };

	Model& model;
	View& view;

public:
	Controller(Window* _window, View& _view, Model& _model) :window{ _window }, view{ _view }, model{ _model } {};

};

