class Circle {
    double pi = 3.142;

    double find(double r) {

        return (pi * r * r);
    }

}

class Area extends Circle {
    double r = 0;

    void show(double x) {
        r = x;
        System.out.println("Area of circle is: " + find(r));

    }
}

public class MultiLevelInheritance extends Area {
    public static void main(String[] args) {
        System.out.println("Demonstration of MultiLevel Inheritance");

        Area area = new Area();
        area.show(5);

    }
}
