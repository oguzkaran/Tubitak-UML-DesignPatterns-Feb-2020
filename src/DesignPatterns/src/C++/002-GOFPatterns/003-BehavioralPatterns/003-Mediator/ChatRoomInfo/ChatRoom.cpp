#include "ChatRoom.h"

#include <iostream>
#include <string>

using namespace std;

void ChatRoom::SendMessage(const User &user, const string &msg)
{
	cout << m_name << "->" << user.GetNickName() << ":" << msg << endl;
}
