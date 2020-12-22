#pragma once
#include <string>
#include "User.h"

class ChatRoom {
public:
	static void SendMessage(const User &user, const std::string &msg);
	//...
};

