#pragma once
#include <string>

class User {
private:
    std::string m_nickname;
    std::string m_ipaddress;
    //...
public:
	User(const char *nickname, const char *ipaddress) : m_nickname{ nickname }, m_ipaddress{ ipaddress } {}
	User(const std::string &nickname, const std::string &ipaddress) : User {nickname.data(), ipaddress.data()} {}
public:
	[[nodiscard]] std::string GetNickName() const { return m_nickname; }
	[[nodiscard]] std::string GetIPAddress() const { return m_ipaddress; }
	//...
};

