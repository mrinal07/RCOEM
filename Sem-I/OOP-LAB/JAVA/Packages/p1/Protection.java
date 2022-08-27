package p1;

public class Protection {

    int n = 123;
    private int pri = 456;
    public int pub = 789;
    protected int pro = 101112;

    public Protection() {
        System.out.println("Protection class from package 1");
        System.out.println("Default number: " + n);
        System.out.println("Private number: " + pri);
        System.out.println("Public  number: " + pub);
        System.out.println("Protected number: " + pro);
    }

}
