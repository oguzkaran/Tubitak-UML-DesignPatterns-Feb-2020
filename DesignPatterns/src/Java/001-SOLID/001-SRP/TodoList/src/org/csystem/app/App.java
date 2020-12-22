package org.csystem.app;

import org.csystem.app.todolistapp.FileSerializationManager;
import org.csystem.app.todolistapp.TodoListInfo;

import java.io.FileInputStream;
import java.io.Serializable;
import java.util.Optional;

public class App {
    public static void main(String[] args)
    {
        TodoListInfo todoListInfo = new TodoListInfo("market");

        todoListInfo.add("Patates al");
        todoListInfo.add("Domates al");

        FileSerializationManager.serialize(todoListInfo, "todos.dat");

        try (FileInputStream fis = new FileInputStream("todos.dat")) {
            Optional<Serializable> opt = FileSerializationManager.deserialize(fis);

            if (opt.isPresent()) {
                TodoListInfo todoList = (TodoListInfo)opt.get();

                System.out.println(todoList.getTitle());

                for (int i = 0; i < todoList.itemsSize(); ++i)
                    System.out.printf("%d.%s%n", i + 1, todoList.get(i));
            }
            else
                System.out.println("Nesne yüklenemedi");
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }

    }
}
