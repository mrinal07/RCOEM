// Use of Default and Parameterized Constructor
public class UseConstructor {
    int a = 1;
    int b = 2;
    int c = 3;

    // Default Constructor
    UseConstructor() {
        System.out.println("Inside Default Contructor");
        a = 111;
        b = 222;
        c = 333;
        System.out.println("a: " + a + " b: " + b + " c: " + c);

    }

    // Parameterized Constructor
    UseConstructor(int x, int y, int z) {
        System.out.println("Inside Parameterized Contructor");
        a = x;
        b = y;
        c = z;
        System.out.println("a: " + a + " b: " + b + " c: " + c);

    }

    public static void main(String[] args) {

        new UseConstructor();
        new UseConstructor(123, 456, 789);

    }

}
