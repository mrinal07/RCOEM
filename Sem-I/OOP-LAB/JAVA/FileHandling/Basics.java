import java.io.File;

public class Basics {
    public static void main(String[] args) {
        System.out.println("File Handling Demo");

        File file = new File("E:/Rcoem-Subjects/Sem-I/OOP-LAB/JAVA/Collections");

        print(file.getName());
        print(file.getPath());

    }

    static void print(String str) {
        System.out.println(str);

    }

}
