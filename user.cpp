#include "user.h"


user::user(string un, string pass, string r):username(un), password(pass), role(r) {};

admin::admin(string un, string pass) :user(un, pass, "Admin") {}
string admin::getRole() const {
	return role;
}

seller::seller(string un, string pass):user(un, pass, "Seller") {}
string seller::getRole() const {
	return role;
}

buyer::buyer(string un, string pass) :user(un, pass, "Buyer") {}
string buyer::getRole() const {
	return role;
}
user::~user() {}             
admin::~admin() {}           
seller::~seller() {}
buyer::~buyer() {}