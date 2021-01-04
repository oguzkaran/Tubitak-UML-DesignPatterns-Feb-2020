package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Manager m = new Manager("12345678912", "ceo", "Ali", "Mecidiyeköy", 80000, "Software");

        m.addEmployee(new Worker("12345678916", "chief", "Veli", "Şişli", 8, 60));
        m.addEmployee(new Worker("12345678917", "any", "Selami", "Göktürk", 5, 60));

        HumanResources humanResources = new HumanResources();

        humanResources.payInsurance(m);
    }
}
