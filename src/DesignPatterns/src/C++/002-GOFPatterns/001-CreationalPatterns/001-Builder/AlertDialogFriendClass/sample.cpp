#include <iostream>
#include "AlertDialog.h"
#include "AlertDialogBuilder.h"

using namespace std;

#if 1
int main()
{
	AlertDialogBuilder builder;

	AlertDialog dlg =
            builder
                    .set_title("Uyari")
                    .set_title("Kaydetmek ister misiniz?")
                    //.set_icon(IconType::Question)
                    .set_button(ButtonType::YesNoCancel)
	        .build();

    dlg.show();
}

#endif
