package org.csystem.app.controller;

import org.csystem.app.entity.Person;
import org.csystem.app.repository.PersonRepository;
import org.csystem.app.view.PersonInsertView;
import org.csystem.app.view.PersonListView;

public class PersonController {
    public void insert() //action method
    {
        try {
            var personInsertView = new PersonInsertView();

            Person p = personInsertView.view();

            var repository = new PersonRepository(); //Singleton olarak da alınabilir

            repository.insertPerson(p);
        }
        catch (Throwable ex) {
            System.out.println(ex.getMessage());
        }
    }

    public void list() //action method
    {
        try {
            var personListView = new PersonListView();

            var repository = new PersonRepository();

            personListView.view(repository.getPeople());
        }
        catch (Throwable ex) {
            System.out.println(ex.getMessage());
        }
    }
}
