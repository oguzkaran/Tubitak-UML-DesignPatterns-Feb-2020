#pragma once
#include <string>

class User {
public:
	User(const std::string &nickname, const std::string &ipaddress)
		: m_nickname{ nickname }, m_ipaddress{ ipaddress } {}
public:
	std::string GetNickName() const { return m_nickname; }
	std::string GetIPAddress() const { return m_ipaddress; }
	//...
private:	
	std::string m_nickname;
	std::string m_ipaddress;
	//...
};

