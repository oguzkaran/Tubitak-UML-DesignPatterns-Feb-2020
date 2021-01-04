package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        String url = "jdbc:postgresql://192.168.1.23:5432/devicesappdb";
        String username = "postgres";
        String pasword = "csd1993";
        String sqlCmd = "select * from devices";

        try (var connection = Driver.getConnection(url, username, pasword);
                var statement = connection.prepareStatement(sqlCmd)) {
            var resultSet = statement.executeQuery();

            //...
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }
    }
}
