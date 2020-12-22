package org.csystem.app.todolistapp;

import java.io.*;
import java.util.Optional;

public final class FileSerializationManager {
    private FileSerializationManager() {}

    @SuppressWarnings("unchecked")
    public static <T extends Serializable> Optional<T> deserialize(FileInputStream fis)
    {
        try {
            ObjectInputStream objectInputStream = new ObjectInputStream(fis);

            return Optional.of((T)objectInputStream.readObject());
        }
        catch (Throwable ex) {

        }

        return Optional.empty();
    }

    public static <T extends Serializable> boolean serialize(T t, String fileName)
    {
        boolean result = true;

        try (FileOutputStream fos = new FileOutputStream(fileName, true)) {
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(fos);

            objectOutputStream.writeObject(t);
            objectOutputStream.flush();
        }
        catch (Throwable ex) {
            //...
            result = false;
        }

        return result;
    }
}
