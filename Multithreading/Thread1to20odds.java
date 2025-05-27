package Multithreading;

public class Thread1to20odds implements Runnable {
    public void run() 
    {
        System.out.println("Hello from thread " + Thread.currentThread().getName() + "!");
        for (int i = 1; i <= 20; i++) 
        {
            if (i % 2 != 0) 
            { 
                System.out.println(Thread.currentThread().getName() + " counts : " + i);
            }
        }
    }
}
