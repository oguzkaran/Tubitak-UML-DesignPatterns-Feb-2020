#include <iostream>
#include <string>
#include "AlertDialog.h"

using namespace std;

AlertDialog::Builder  &AlertDialog::Builder::setTitle(const std::string &title)
{
	m_up->m_title = title;

	return *this;
}
AlertDialog::Builder  &AlertDialog::Builder::setText(const std::string &text)
{
	m_up->m_text = text;

	return *this;
}
AlertDialog::Builder  &AlertDialog::Builder::setIcon(IconType icon)
{
	m_up->m_icon = icon;

	return *this;
}

AlertDialog::Builder  &AlertDialog::Builder::setButton(ButtonType button)
{
	m_up->m_button = button;

	return *this;
}


std::unique_ptr<AlertDialog> AlertDialog::Builder::build()
{
	//...
	return std::move(m_up);	
}

void AlertDialog::Show()
{
	string icons[]{ "QUESTION", "WARNING", "CRITICAL" };
	string buttons[]{ "YESNO", "YESNOCANCEL", "OK" };

	cout << "Title:" << m_title << endl;
	cout << "Text:" << m_text << endl;
	cout << "Icon:" << icons[m_icon] << endl;
	cout << "Button:" << buttons[m_button] << endl;
}



