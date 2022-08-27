import java.util.LinkedList;

public class LinkedListDemo {
    public static void main(String[] args) {
        System.out.println("LinkedList Demonstration");

        LinkedList<Integer> list = new LinkedList<Integer>();

        list.add(800);
        list.add(700);
        list.add(200);

        System.out.println(list);
        
        list.add(2,786);
        System.out.println(list);

        list.addFirst(111);
        System.out.println(list);

        list.addLast(333);        
        System.out.println(list);

        System.out.println(list.get(3));

        System.out.println(list.peek());
        
        System.out.println(list);

        list.clear();
        System.out.println(list);

    }
    
}
