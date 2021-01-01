package org.csystem.app.repository;

import org.csystem.app.entity.Person;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class PersonRepository {
    public boolean insertPerson(Person person)
    {
        boolean result = false;

        try (var fileOutputStream = new FileOutputStream("people.dat", true)){
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutputStream);

            objectOutputStream.writeObject(person);
            result = true;
        }
        catch (Throwable ex) {

        }

        return result;
    }

    public List<Person> getPeople() throws IOException, ClassNotFoundException
    {
        var people = new ArrayList<Person>();

        try (var fileInputStream = new FileInputStream("people.dat")) {
            for (;;) {
                var objectInputStream = new ObjectInputStream(fileInputStream);
                people.add((Person) objectInputStream.readObject());
            }
        }
        catch (EOFException ignore) {

        }

        return people;
    }
}
