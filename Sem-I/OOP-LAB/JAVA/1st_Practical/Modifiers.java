class Demo{
    int a=1;
    public int b=2;
    private int c=3;

    void setC(int z){        
        c=z;
    }
    int showC(){        
       return c;
    }

}
public class Modifiers {
    public static void main(String[] args) {

        System.out.println("Access Modifiers");
        
        Demo obj = new Demo();
        System.out.println("A: "+obj.a+" B: "+obj.b);
        obj.a = 100;
        obj.b = 200;
        System.out.println("A: "+obj.a+" B: "+obj.b);


        // System.out.println("C: "+obj.c); // Error because c variable is private

        obj.setC(300);

        System.out.println("C:"+obj.showC());

        
    }
    
}
