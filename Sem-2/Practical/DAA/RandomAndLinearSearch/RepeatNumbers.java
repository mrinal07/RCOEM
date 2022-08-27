import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;
import java.util.Scanner;

public class RepeatNumbers {

    public static void main(String[] args) {

        // nonUnique();
        Unique();
    }

    static void nonUnique() {
        Random ran = new Random();
        int number = 0;

        try (PrintWriter file = new PrintWriter(new BufferedWriter(new FileWriter("test1.txt")));) {

            for (int i = 1; i <= 100000; i++) {
                number = ran.nextInt(99999) + 1;
                file.println(number);
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static void Unique() {

        Random ran = new Random();
        int number = 0;
        HashSet<Integer> hs = new HashSet<Integer>();
        try (PrintWriter file = new PrintWriter(new BufferedWriter(new FileWriter("test2.txt")));) {

            for (int i = 1; i <= 300000; i++) {
                number = ran.nextInt(99999) + 1;

                if (!hs.contains(number)) {
                    file.println(number);
                    hs.add(number);
                } 

            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // System.out.println(hs);

    }
}

// linear search in both test1 and test2 files
// test1 print all postions
// test2 print only unique positions