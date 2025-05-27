package Multithreading;

public class ThreadTester 
{
    public static void main(String[] args) throws InterruptedException {
        Thread1to10 thread1to10 = new Thread1to10();
        Thread thread1 = new Thread(thread1to10 , "Thread-1");
        Thread1to20odds thread1to20odds = new Thread1to20odds();
        Thread thread2 = new Thread(thread1to20odds, "Thread-Odds");

        thread1.start();
        Thread.sleep(1000); 
        thread2.start();    
    }   
}
