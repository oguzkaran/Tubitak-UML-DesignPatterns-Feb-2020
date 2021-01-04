#pragma once

#include <string>

#include "AlertDialog.h"

class AlertDialogBuilder {
	//...
public:	
	AlertDialogBuilder &set_title(const std::string &title);
	AlertDialogBuilder &set_text(const std::string &text);
	AlertDialogBuilder &set_icon(IconType icon);
	AlertDialogBuilder &set_button(ButtonType button);
	AlertDialog build();	
private:
	AlertDialog m_dlg;	
};

