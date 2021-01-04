package org.csystem.app;

import org.csystem.util.MyOptional;

public class App {
    public static void main(String[] args)
    {
        Person p1 = new Person("Oğuz", "Karan");
        Person p2 = new Person("Galip", "Çağan", "Nasuhoğlu");

        System.out.println(p1);
        System.out.println(p2);
    }
}

class Person {
    private String m_firstName;
    private MyOptional<String> m_secondName;
    private String m_surname;

    public Person(String firstName,String surname)
    {
        this(firstName, null, surname);
    }

    public Person(String firstName, String secondName, String surname)
    {
        //....
        m_firstName = firstName;
        m_secondName = MyOptional.ofNullable(secondName);
        m_surname = surname;
    }

    public String getFirstName()
    {
        return m_firstName;
    }

    public void setFirstName(String firstName)
    {
        m_firstName = firstName;
    }

    public MyOptional<String> getSecondName()
    {
        return m_secondName;
    }

    public void setSecondName(String secondName)
    {
        m_secondName = MyOptional.ofNullable(secondName);
    }

    public String getSurname()
    {
        return m_surname;
    }

    public void setSurname(String surname)
    {
        m_surname = surname;
    }

    @Override
    public String toString()
    {
        return String.format("%s%s%s",
                m_firstName, m_secondName.isPresent() ? " " + m_secondName.get() : "", " " + m_surname);
    }
}