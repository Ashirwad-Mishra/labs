package Multithreading;

public class Thread1to20 implements Runnable{
    public void run() 
    {
        System.out.println("Hello from thread " + Thread.currentThread().getName() + "!");
        for (int i = 1; i <= 20; i++) 
        {
            System.out.println(Thread.currentThread().getName() + " counts : " + i);
        }
    }
}
