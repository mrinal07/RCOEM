class StaticAndNonstatic {
    int x = 500;
    static int y = 200;

    // static function
    static void show() {
        System.out.println("Static function is called.");
        System.out.println("Static variable: y=" + y);
        // System.out.println("Non-Static variable: x="+x); // Cannot make a static
        // reference to the non-static field x
    }

    // non-static function
    void display() {
        System.out.println("Non-static function is called.");
        System.out.println("Static variable: y=" + y);// Can access a static variable from the non-static method
        System.out.println("Non-Static variable: x=" + x);
    }

}

public class StaticDemo {
    public static void main(String[] args) {
        StaticAndNonstatic obj = new StaticAndNonstatic();
        System.out.println("Implementing Static variables and Static member function");

        StaticAndNonstatic.show();
        obj.display();

    }
}