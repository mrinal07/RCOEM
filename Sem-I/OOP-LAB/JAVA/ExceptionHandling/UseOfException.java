public class UseOfException {
    public static void main(String[] args) throws Exception {
        System.out.println("Exception Handling");

        int arr[] = new int[10];

        try {
            System.out.println(arr[52]);
        } catch (Exception e) {
            System.out.println("Custom Exception:- Array index out of bound exception");
        } finally {
            System.out.println("End of this program!!!!");
        }

        numberFormat(22);

        // System.out.println(val);
    }

    private static void numberFormat(int x) throws Exception {

        int str = x;

        if (str < 18) {
            throw new ArithmeticException("You'r age must be at least 18 years old.");
        } else {
            System.out.println("You are old enough!");
        }

    }

}
