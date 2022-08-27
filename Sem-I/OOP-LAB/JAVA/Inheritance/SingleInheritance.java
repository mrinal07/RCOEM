//Single Inheritance
class Parent {

    int side = 0;

    void show(int x) {
        side = x;
        side = side * side;
        System.out.println("Area of square is: " + side);
    }

}

public class SingleInheritance extends Parent {

    public static void main(String[] args) {

        System.out.println("Implementing Single Inheritance");

        Parent parent = new Parent();
        parent.show(4);

    }

}
