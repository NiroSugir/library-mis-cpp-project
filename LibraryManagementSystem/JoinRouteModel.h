#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "Model.h"

using std::unique_ptr;
using std::string;
using std::vector;

class JoinRouteModel : public Model {
	string* first_name{ nullptr };
	string* last_name{ nullptr };
	string* username{ nullptr };
	string* password{ nullptr };
	string* verify_password{ nullptr };

public:
	JoinRouteModel();

	~JoinRouteModel();

	bool set_first_name(string _first_name);

	bool set_last_name(string _last_name);

	bool set_username(string _username);

	bool set_password(string _password, string _verify_password);

	void clear();

	bool save_to_db();

	vector<string> get_membership_types();
};
