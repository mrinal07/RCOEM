import java.io.*;
import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        ArrayList<Integer> list = getFile();

        System.out.println("Enter Element to search in File");
        int find = sc.nextInt();

        long startTime = System.nanoTime();

        int elementPosition = binarySearch(list, 0, (list.size() - 1), find);

        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        double seconds = (double) totalTime;

        System.out
                .println((elementPosition == -1) ? "Not Found" : "Found Element at position:" + (elementPosition + 1));

        System.out.println("\nBinary Search:");

        System.out.println("TotalTime=> " + seconds + " nano seconds");
        System.out.println();

        sc.close();

    }

    private static int binarySearch(ArrayList<Integer> list, int start, int end, int find) {

        if (start <= end) {
            int mid = start + (end - start) / 2;

            if (list.get(mid) == find)
                return mid;

            if (list.get(mid) > find)
                return binarySearch(list, start, mid - 1, find);

            return binarySearch(list, mid + 1, end, find);
        }

        return -1;
    }

    private static ArrayList<Integer> getFile() {
        ArrayList<Integer> list = new ArrayList<Integer>();

        File file2 = new File("Sort/SelectionArray.txt");
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
        return list;
    }

}
