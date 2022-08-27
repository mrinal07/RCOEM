import java.util.Scanner;

public class NPTEL {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double mark_avg;
        int result;
        int i;
        int s;
        // define size of array
        s = 5;
        // The array is defined "arr" and inserted marks into it.
        int[] arr = {20, 50, 60, 40, 70};
        // for (i = 0; i < arr.length; i++) {
        //     arr[i] = input.nextInt();
        // }

        int maximum=arr[0];
        int sum=0;

        for( i=0 ; i< arr.length ; i++ )
        {
            sum+=arr[i];
            if( maximum < arr[i] ){
                maximum = arr[i];
            }
        }

        result = maximum;
        mark_avg = (sum/arr.length);

        System.out.println(mark_avg);

    }
}
