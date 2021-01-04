package org.csystem.app.view;

import org.csystem.app.entity.Person;

import java.time.LocalDate;
import java.util.Scanner;

public class PersonInsertView {
    public Person view()
    {
        Scanner kb = new Scanner(System.in);

        System.out.println("id'yi giriniz:");
        int id = Integer.parseInt(kb.nextLine());

        System.out.println("ismi giriniz:");
        String name = kb.nextLine();

        return new Person(id, name, LocalDate.now());
    }
}
