package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        var builder = new AlertDialog.Builder();
        var dlg = builder
                .setTitle("Dikkat")
                .setMessage("Kaydetmeden çıkmak istiyor musunuz?")
                .setButton(AlertDialogButton.YESNO)
                //.setIcon(AlertDialogIcon.QUESTION)
                .build();

        dlg.show();
    }
}
