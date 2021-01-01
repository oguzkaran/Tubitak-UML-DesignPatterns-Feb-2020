package org.csystem.app;

import org.csystem.app.controller.PersonController;

import java.util.Scanner;

public class SamplePeopleApplication {
    private final Scanner m_kb = new Scanner(System.in);

    private void displayMenu()
    {
        System.out.println("1.Ekle");
        System.out.println("2.Listele");
        System.out.println("3.Çıkış");
        System.out.print("Seçenek:");
    }

    private void inserProc()
    {
        var controller = new PersonController();

        controller.insert();
    }

    private void listProc()
    {
        var controller = new PersonController();

        controller.list();
    }

    public void run()
    {
        EXIT_MENU:
        for (;;) {
            try {
                displayMenu();
                int option = Integer.parseInt(m_kb.nextLine());

                switch (option) {
                    case 1:
                        this.inserProc();
                        break;
                    case 2:
                        this.listProc();
                        break;
                    case 3:
                        break EXIT_MENU;
                    default:
                        System.out.println("Yanlış seçenek");
                }
            }
            catch (NumberFormatException ignore) {
                System.out.println("Geçersiz giriş");
            }
            catch (Throwable ignore) {
                System.out.println("Beklenmedik bir durum oluştu");
            }
        }
        System.out.println("Teşekkürler");
    }
}
