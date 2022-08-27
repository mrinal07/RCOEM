import java.util.ArrayList;
import java.util.Scanner;

public class ByteStuffing {
    public static void main(String[] args) {
        System.out.println("ByteStuffing Program");
        System.out.println("----------*---------");

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter data in bytes(Character): ");
        String bitData = sc.nextLine();
        System.out.println("----------*---------");

        System.out.println("Enter frame size for bits");
        int frameSize = sc.nextInt();
        int fSize = frameSize;
        System.out.println("----------*---------");

        if (frameSize > bitData.length()) {
            System.out.println("Frame size should be less than number of bits");
            System.out.println("Please enter properly");
            return;
        }

        ArrayList<String> list = new ArrayList<>();
        String frameBits = "";

        int quot = (bitData.length() / frameSize);
        int rem = (bitData.length() % frameSize);
        // System.out.println(quot + " " + rem);

        System.out.println("Enter Starting Delimeter ");
        char startingDelimeter = sc.next().charAt(0);

        System.out.println("Enter Ending Delimeter");
        char endingDelimeter = sc.next().charAt(0);

        int i = 0, j = 0, k = 0;

        for (i = 0; i < quot; i++) {
            for (j = k; j < frameSize; j++) {
                frameBits = frameBits + bitData.charAt(j);
            }
            k = j;
            frameSize += fSize;
            list.add(startingDelimeter + " " + frameBits + " " + endingDelimeter);
            frameBits = "";
        }

        if (rem != 0) {
            String paddedString = bitData.substring(j);
            list.add(startingDelimeter + " " + paddedString + " " + endingDelimeter);
        }

        System.out.println("Input: " + list);
        String start = "", end = "", padding = "";

        for (i = 0; i < list.size(); i++) {
            String str = list.get(i);

            for (j = 1; j < str.length() - 1; j++) {

                if (str.charAt(j) == startingDelimeter) {
                    start = str.substring(0, j);
                    padding = str.substring(j, j + 1);
                    end = str.substring(j + 1);
                    padding += startingDelimeter;
                    str = start + padding + end;
                    j++;

                } else if (str.charAt(j) == endingDelimeter) {
                    start = str.substring(0, j);
                    padding = str.substring(j, j + 1);
                    end = str.substring(j + 1);
                    padding += endingDelimeter;
                    str = start + padding + end;
                    j++;
                    // System.out.println("else:: " + start + " :: " + padding + ":: " + end);
                    // System.out.println(list.get(i) + " " + str.length());

                }
                list.set(i, str);

            }

        }
        System.out.println("Output: " + list);

    }

}
// Program Output:

// ByteStuffing Program
// ----------*---------
// Enter data in bytes(Character):
// #vai#$ish$#na$#vi$#
// ----------*---------
// Enter frame size for bits
// 5
// ----------*---------
// Enter Starting Delimeter
// #
// Enter Ending Delimeter
// $
// Input: [# #vai# $, # $ish$ $, # #na$# $, # vi$# $]
// Output: [# ##vai## $, # $$ish$$ $, # ##na$$## $, # vi$$## $]
