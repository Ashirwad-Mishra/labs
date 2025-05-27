package Multithreading;

public class Thread1to10 implements Runnable {
    public void run() 
    {
        System.out.println("Hello from thread " + Thread.currentThread().getName() + "!");
        for (int i = 1; i <= 10; i++) 
        {
            System.out.println(Thread.currentThread().getName() + " counts : " + i);
        }
    }

    public static void main(String[] args) throws InterruptedException {
        Thread1to10 threadTask = new Thread1to10();
        Thread thread = new Thread(threadTask, "Thread-1");
        thread.start();
    }
    
}
