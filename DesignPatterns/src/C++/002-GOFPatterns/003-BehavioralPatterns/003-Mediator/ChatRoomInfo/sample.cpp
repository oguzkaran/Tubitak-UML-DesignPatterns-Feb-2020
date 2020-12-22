#include <iostream>
#include "User.h"
#include "ChatRoom.h"

using namespace std;

#if 1
int main()
{
	User u1{ "test", "194.56.78.45" };
	User u2{ "mest", "194.56.78.54" };
    ChatRoom room {"Tubitak Design Patterns"};

	room.SendMessage(u1, "Merhaba");
	room.SendMessage(u2, "Merhaba");
	room.SendMessage(u1, "Nasilsiniz");
	room.SendMessage(u2, "Ben iyiyim");

	return 0;
}

#endif
