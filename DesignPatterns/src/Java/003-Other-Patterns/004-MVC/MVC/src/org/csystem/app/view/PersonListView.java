package org.csystem.app.view;

import org.csystem.app.entity.Person;

import java.time.LocalDate;
import java.util.List;
import java.util.Scanner;

public class PersonListView {
    public void view(List<Person> people)
    {
        if (!people.isEmpty())
            people.forEach(System.out::println);
        else
            System.out.println("Hiç veri girilmemiş");
    }
}
