package org.csystem.app;

public class HumanResources {
    //...
    public void payInsurance(Employee employee)
    {
        System.out.printf("Citizen Id:%s%n", employee.getCitizenId());
        System.out.printf("Name:%s%n", employee.getName());
        System.out.printf("Payment:%f%n", employee.calculateInsurance());
        System.out.println("******************");

        for (int i = 0; i < employee.size(); ++i) {
            Employee e = employee.get(i);
            System.out.printf("Citizen Id:%s%n", e.getCitizenId());
            System.out.printf("Name:%s%n", e.getName());
            System.out.printf("Payment:%f%n", e.calculateInsurance());
            System.out.println("******************");
        }
    }
}
