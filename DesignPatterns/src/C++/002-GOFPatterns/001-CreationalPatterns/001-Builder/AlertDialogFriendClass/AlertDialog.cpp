#include "AlertDialog.h"

#include <iostream>
#include <string>

using namespace std;

void AlertDialog::show()
{
	string icons[] = { "Question", "Warning", "Critical" };
	string buttons[] = { "YesNo", "YesNoCancel", "Ok" };

	cout << "Title:" << m_title << endl;
	cout << "Text:" << m_text << endl;
	cout << "Icon:" << icons[m_icon] << endl;
	cout << "Button:" << buttons[m_button] << endl;
}



