#include "LoginRouteModel.h"

LoginRouteModel::LoginRouteModel() {}

LoginRouteModel::~LoginRouteModel() {
	/*if (first_name) {
		delete first_name;
		first_name = nullptr;
	}

	if (last_name) {
		delete last_name;
		last_name = nullptr;
	}

	if (username) {
		delete username;
		username = nullptr;
	}

	if (password) {
		delete password;
		password = nullptr;
	}

	if (verify_password) {
		delete verify_password;
		verify_password = nullptr;
	}*/
}

//bool LoginRouteModel::set_first_name(string _first_name) {
//	first_name = &_first_name;
//
//	return true;
//}
//
//bool LoginRouteModel::set_last_name(string _last_name) {
//	last_name = &_last_name;
//
//	return true;
//}
//
//bool LoginRouteModel::set_username(string _username) {
//	username = &_username;
//
//	return true;
//}
//
//bool LoginRouteModel::set_password(string _password, string _verify_password) {
//	if (_password == _verify_password) {
//		password = &_password;
//	}
//
//	return true;
//}
//
//void LoginRouteModel::clear() {
//	first_name = nullptr;
//	last_name = nullptr;
//	username = nullptr;
//	password = nullptr;
//	verify_password = nullptr;
//}
//
//bool LoginRouteModel::save_to_db() {
//	return true;
//}
//
//vector<string> LoginRouteModel::get_membership_types()
//{
//	return vector<string> { "Regular Member", "Staff Member", "Supplier" };
//}
