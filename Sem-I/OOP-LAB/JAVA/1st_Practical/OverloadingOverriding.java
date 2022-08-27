// Method Overloading and Overriding
class AddNumber {
    // Method Overloading
    int add(int x, int y) {
        return (x + y);
    }

    // Method Overloading
    double add(double x, double y) {
        return (x - y);
    }

    // Method Overriding
    void overridingDemo() {
        System.out.println("Inside AddNumber Class");
    }

}

public class OverloadingOverriding extends AddNumber {

    // Method Overriding
    void overridingDemo() {
        System.out.println("Inside OverloadingOverriding Class");
    }

    public static void main(String[] args) {

        AddNumber obj = new AddNumber();
        OverloadingOverriding obj2 = new OverloadingOverriding();

        System.out.println("Method Overloading");

        System.out.println("Addition: " + obj.add(40, 20));
        System.out.println("Subtraction: " + obj.add(4.4, 2.2));

        System.out.println("\nMethod Overriding");
        obj.overridingDemo();
        obj2.overridingDemo();

    }

}
