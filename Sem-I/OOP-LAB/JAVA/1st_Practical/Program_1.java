// Take inputs through command line
public class Program_1
{
    public static void main(String[] args) {
        System.out.println("Hello this is First Program");
        System.out.println("Argument:"+args[0]);

        // OR

        for(int i=0 ; i<args.length ; i++)
        {
            System.out.println(args[i]);
        }
    }
}