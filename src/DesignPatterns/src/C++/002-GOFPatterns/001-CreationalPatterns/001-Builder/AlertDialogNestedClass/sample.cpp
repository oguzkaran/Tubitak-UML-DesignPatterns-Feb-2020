#include <iostream>
#include "AlertDialog.h"

using namespace std;

using AlertDialogBuilder = AlertDialog::Builder;

#if 1
int main()
{
    AlertDialogBuilder builder;

	unique_ptr<AlertDialog> up{ builder.setTitle("UYARI")
		.setText("Kaydetmek ister misiniz?")
		.setIcon(IconType::QUESTION)
		.setButton(ButtonType::YESNOCANCEL).build() };

	up->Show();
}

#endif
