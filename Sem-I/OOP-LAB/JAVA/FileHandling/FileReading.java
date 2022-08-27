import java.io.*;

public class FileReading {
    public static void main(String args[]) {
        try {
            FileInputStream file = new FileInputStream(
                    "E:\\Rcoem-Subjects\\Sem-I\\OOP-LAB\\JAVA\\FileHandling\\Basics.java");

            System.out.println(file.available());

            int i = 0;

            while ((i = file.read()) != -1) {
                System.out.print((char) i);
            }

            file.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
