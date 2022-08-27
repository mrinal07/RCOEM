import java.io.*;
import java.util.*;

class InsertionSort {

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

        for (int i = 0; i < list.size(); i++) {
            int key = list.get(i);
            int j = i - 1;

            while ((j >= 0) && (key < list.get(j))) {
                list.set((j + 1), list.get(j));
                j--;
            }
            list.set((j + 1), key);
        }

        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        double seconds = (double) totalTime / 1000000000.0;

        // System.out.println(list);

        System.out.println("Insertion Sort:");
        System.out.println("TotalTime=> " + seconds + " seconds");

        try (PrintWriter file = new PrintWriter(new BufferedWriter(new FileWriter("Sort/InsertionArray.txt")));) {

            for (int i = 0; i < list.size(); i++) {
                file.println(list.get(i));
            }

        } catch (IOException e) {
            e.printStackTrace();
        }

    }

}
