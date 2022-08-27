import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;


public class LinearSearchRepeatNumbers {

    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<Integer>();
        int pos = 0;
        File file = new File("RandomAndLinearAndInsertion/Repeat.txt");

        BufferedReader reader = null;

        // Find inside duplicates File
        System.out.println("Enter any number to find");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        try {
            reader = new BufferedReader(new FileReader(file));
            String text = null;

            long startTime = System.nanoTime();

            while ((text = reader.readLine()) != null) {
                pos++;
                if (n == (Integer.parseInt(text))) {
                    list.add(pos);
                }
               
            }

            long endTime = System.nanoTime();
            long totalTime = endTime - startTime;
            double seconds = (double) totalTime / 1000000000;

            System.out.println((list.size() == 0) ? "Not Found!" : "Element Found:");
            System.out.println(list);
            System.out.println("totalTime: " + seconds +" seconds");

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                if (reader != null) {
                    reader.close();
                }
            } catch (IOException e) {
            }
        }

        sc.close();

    }

}
