import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.OutputStream;

public class FileCreating {
    public static void main(String[] args) throws Exception {
        System.out.println("File Creating Demo");

        String src = "This is demo for creating any random file."+"\nHello World...";

        byte b[] = src.getBytes();

        OutputStream os = new FileOutputStream("DemoFile1.txt");

        for( int i=0 ; i<b.length ; i++ )
        {
            os.write(b[i]);
        }

        os.close();
        


    }
    
}
