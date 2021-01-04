#include "AlertDialogBuilder.h"

using namespace std;

AlertDialogBuilder &AlertDialogBuilder::set_title(const std::string &title)
{
	m_dlg.m_title = title;

	return *this;
}
AlertDialogBuilder &AlertDialogBuilder::set_text(const std::string &text)
{
	m_dlg.m_text = text;
	return *this;
}
AlertDialogBuilder &AlertDialogBuilder::set_icon(IconType icon)
{
	m_dlg.m_icon =  icon;
	return *this;
}

AlertDialogBuilder &AlertDialogBuilder::set_button(ButtonType button)
{
	m_dlg.m_button = button;

	return *this;
}


AlertDialog AlertDialogBuilder::build()
{
	//...
	return move(m_dlg);
}
