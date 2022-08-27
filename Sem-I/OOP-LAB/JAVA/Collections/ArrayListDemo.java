import java.util.ArrayList;

class ArrayListDemo {

    public static void main(String[] args) {
        System.out.println("ArrayList Demonstration");

        ArrayList<Integer> al = new ArrayList<Integer>();

        // Add elements to arraylist
        al.add(200);
        al.add(789);
        al.add(52);
        al.add(57);
        al.add(59);

        // print the size of an arraylist
        System.out.println(al.size());
        
        // print arraylist
        System.out.println(al);

        // Add elements to arraylist at specific index
        al.add(2,100);
        System.out.println(al);

        // get element from arraylist at given index 
        System.out.println(al.get(3));

        // check whether arraylist is empty or not!
        System.out.println(al.isEmpty());

        // get index of given element
        System.out.println(al.indexOf(57));

        // remove element from given index
        al.remove(2);
        System.out.println(al);
        
        // remove all element from arraylist
        al.removeAll(al);
        System.out.println(al);

        // clear all elements from arraylist        
        al.clear();
        System.out.println(al);




    }
    
}
