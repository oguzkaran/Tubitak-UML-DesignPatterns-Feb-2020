#pragma once
#include <string>
#include "User.h"

class ChatRoom final {
private:
    std::string m_name;
public:
    explicit ChatRoom(const char *name) : m_name{name} {}
    explicit ChatRoom(const std::string &r) : ChatRoom {r.data()} {}
	void SendMessage(const User &user, const std::string &msg);
	//...
};

