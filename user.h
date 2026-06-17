#ifndef USER_H
#define USER_H
#include<string>
using namespace std;

class user {
protected:
	string username;
	string password;
	string role;
public:
	user(string un, string pass, string r);
	virtual string getRole() const = 0 ;
	virtual~user()=0 ;
};

class admin :public user {
public:
	admin(string un, string pass);
	string getRole() const override;
	~admin();
};

class seller :public user {
public:
	seller(string un, string pass);
	string getRole()const override;
	~seller();
};

class buyer :public user {
public:
	buyer(string un, string pass);
	string getRole() const override;
	~buyer();
};
#endif

