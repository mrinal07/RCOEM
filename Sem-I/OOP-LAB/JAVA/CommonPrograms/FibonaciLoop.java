public class FibonaciLoop {
    public static void main(String[] args) {
        System.out.println("Fibonacci Series using for loop");
        int n = 9;

        // usingLoop(n);
        int ans = usingRecursion(n);
        System.out.println(ans);

    }

    private static int usingRecursion(int num) {

        if (num == 1) // same as first variable in for loop
            return 0;
        else if (num == 2) // same as second variable in for loop
            return 1;

        return usingRecursion(num - 1) + usingRecursion(num - 2);

    }

    private static void usingLoop(int num) {
        int n = num;

        int first = 0, second = 1, nextSum = 0;

        for (int i = 0; i < n; i++) {
            System.out.print(first + " ");
            nextSum = first + second;
            first = second;
            second = nextSum;
        }
    }

}
