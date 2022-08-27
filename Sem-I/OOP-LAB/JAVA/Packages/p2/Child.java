package p2;

import p1.Protection;

public class Child extends Protection {

    public Child() {
        System.out.println("\nChild class from package 2");

        // System.out.println("Default number: " + n);
        // System.out.println("Private number: " + pri);
        System.out.println("Public  number: " + pub);
        System.out.println("Protected number: " + pro);
    }

}
