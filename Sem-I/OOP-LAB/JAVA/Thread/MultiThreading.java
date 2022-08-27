class ThreadDemo extends Thread {
    public void run()
    {
        try {
            // Displaying the thread that is running
            System.out.println(
                "Thread " + Thread.currentThread().getId()
                + " is running");
        }
        catch (Exception e) {
            // Throwing an exception
            System.out.println("Exception is caught");
        }
    }
}
 

public class MultiThreading {

    public static void main(String[] args) {
        System.out.println("MultiThreading Program");
        int n = 5; // Number of threads
        for (int i = 0; i < n; i++) {
            ThreadDemo obj
                = new ThreadDemo();
            obj.start();
        }
    }
    
}
