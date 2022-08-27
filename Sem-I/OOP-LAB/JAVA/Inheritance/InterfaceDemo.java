interface Drawing {
    void draw();
}

class Triangle implements Drawing {
    public void draw() {
        System.out.println("Drawing Triangle");
    }
}

class Square implements Drawing {
    public void draw() {
        System.out.println("Drawing Square");
    }
}

public class InterfaceDemo {
    public static void main(String[] args) {
        System.out.println("Demonstration of Interface");
        Drawing drawSquare = new Square();
        drawSquare.draw();
        Drawing drawTriangle = new Triangle();
        drawTriangle.draw();

    }

}
