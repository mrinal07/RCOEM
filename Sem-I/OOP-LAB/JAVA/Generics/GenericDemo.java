class Gen<T> {
    T obj;

    Gen(T x) {
        obj = x;
    }

    T getData() {
        return obj;
    }

    void showData() {
        System.out.println("Type of T is: " + obj.getClass().getName());

    }

}

public class GenericDemo {

    public static void main(String[] args) {
        System.out.println("Hello Generics Class");

        Gen<Integer> obj = new Gen<Integer>(786);

        int num = obj.getData();
        System.out.println("Number is: " + num);
        obj.showData();

        Gen<String> obj2 = new Gen<String>("Learning Generics");
        String str = obj2.getData();
        System.out.println(str);
        obj2.showData();

    }

}
