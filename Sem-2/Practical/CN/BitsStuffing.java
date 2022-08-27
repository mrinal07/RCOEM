import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class BitsStuffing {
    public static void main(String[] args) throws IOException {

        System.out.println("BitsStuffing Program");
        System.out.println("----------*---------");

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter data in bits: ");
        String bitData = sc.nextLine();
        
        System.out.println("----------*---------");

        if (bitData.contains(" ")) {
            System.out.println("Your bits should not contains WHITE SPACE");
            System.out.println("Please enter properly");
            return;
        }

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

        sc.nextLine(); // put cursor in next line so that we can take input of two lines
        System.out.println("Enter Starting Delimeter ");
        String startingDelimeter = sc.nextLine();

        System.out.println("Enter Ending Delimeter");
        String endingDelimeter = sc.nextLine();

        int i = 0, j = 0, k = 0;

        for (i = 0; i < quot; i++) {
            for (j = k; j < frameSize; j++) {
                frameBits = frameBits + bitData.charAt(j);
            }
            k = j;
            frameSize += fSize;
            list.add(startingDelimeter + frameBits + endingDelimeter);

            frameBits = "";
        }

        // if rem is zero then no need to do padding
        if (rem != 0) {
            String paddedString = bitData.substring(j);
            for (i = 0; i < (fSize - rem); i++)
                paddedString += "0";

            list.add(startingDelimeter + paddedString + endingDelimeter);

        }

        System.out.println("Input: " + list);

        int count = 0;
        String str = "";

        for (i = 0; i < list.size(); i++) {
            String z = list.get(i);

            for (j = 0; j < list.get(i).length(); j++) {
                char ch = z.charAt(j);

                if (ch == '1') {

                    count++;

                    if (count < 5)
                        str += ch;
                    else {

                        str = str + ch + '0';
                        count = 0;
                    }
                } else {
                    str += ch;
                    count = 0;
                }

            }
            str += " ";

        }
        list.clear();
        list.add(str);

        System.out.println("Output: " + (str));

    }
}

// Program Output:

// BitsStuffing Program
// ----------*---------
// Enter data in bits:
// 111110001111
// ----------*---------
// Enter frame size for bits
// 5
// ----------*---------
// Enter Starting Delimeter
// #
// Enter Ending Delimeter
// $
// Input: [#11111$, #00011$, #11000$]
// Output: #111110$ #00011$ #11000$