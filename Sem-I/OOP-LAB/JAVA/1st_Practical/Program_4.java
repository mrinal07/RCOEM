// Use of Class, class object and member function
public class Program_4 {
    public static void main(String[] args) {

        Circle circle = new Circle();

        circle.r = 4;

        System.out.println("Area of circle is: " + (circle.pi * circle.r * circle.r));

        Rectangle rectangle = new Rectangle();
        rectangle.length = 100;
        rectangle.height = 150;

        rectangle.output();

    }

}

class Circle {

    double pi = 3.142;
    double r;

}

class Rectangle {
    double length;
    double height;

    void output() {

        System.out.println("Area of rectangle is: " + (length * height));

    }
}