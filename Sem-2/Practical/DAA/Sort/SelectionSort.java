import java.io.*;
import java.util.*;

public class SelectionSort {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<Integer>();

        File file2 = new File("RandomAndLinearSearch/UniqueDecreasing.txt");
        BufferedReader reader = null;

        try {
            reader = new BufferedReader(new FileReader(file2));
            String text = null;

            while ((text = reader.readLine()) != null) {
                list.add(Integer.parseInt(text));
            }

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

        long startTime = System.nanoTime();

        for (int i = 0; i < list.size() - 1; i++) {
            int minimumIndex = i;
            for (int j = i + 1; j < list.size(); j++)
                if (list.get(minimumIndex) > list.get(j))
                    minimumIndex = j;

            int temp = list.get(minimumIndex);
            list.set(minimumIndex, list.get(i));
            list.set(i, temp);
        }

        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        double seconds = (double) totalTime / 1000000000.0;

        // System.out.println(list);

        System.out.println("\nSelection Sort:");

        System.out.println("TotalTime=> " + seconds + " seconds");

        try (PrintWriter file = new PrintWriter(
                new BufferedWriter(new FileWriter("Sort/SelectionArray.txt")));) {

            for (int i = 0; i < list.size(); i++) {
                file.println(list.get(i));
            }

        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}
