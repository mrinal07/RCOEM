class Animal {
    void eat() {
        System.out.println("Eating Food...");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is Barking...");
    }
}

class Cat extends Animal {
    void meow() {
        System.out.println("Cat is Meowing...");
    }
}

public class HierarchicalInheritance {
    public static void main(String[] args) {
        System.out.println("Demonstration of Hierarchical Inheritance");
        Cat c = new Cat();
        c.meow();
        c.eat();
        Dog d = new Dog();
        d.bark();
        d.eat();

    }

}
