// Use of Scanner class and Array
import java.util.Scanner;

public class Program_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];

        System.out.println("Enter roll no of five students");
        for( int i=0 ; i<arr.length ; i++ )        
        arr[i] = sc.nextInt();
        
        System.out.println("Roll no of five students are: ");
        for( int i=0 ; i<arr.length ; i++ )        
            System.out.print(arr[i]+" ");

        sc.close();
    }    
}
