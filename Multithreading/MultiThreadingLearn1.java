package Multithreading;

public class MultiThreadingLearn1 extends Thread implements Runnable {

    public void run() {
        for (int i = 0; i < 5; i++) 
        {
            System.out.println(Thread.currentThread().getName() + " : " + i);
            try 
            {
                Thread.currentThread().sleep(1000);
            } 
            catch (InterruptedException e) 
            {
                System.out.println(e);
            }
        }
    }
    public static void main(String[] args) {
        MultiThreadingLearn1 ob1 = new MultiThreadingLearn1();
        MultiThreadingLearn1 ob2 = new MultiThreadingLearn1();
        MultiThreadingLearn1 ob3 = new MultiThreadingLearn1();
        MultiThreadingLearn1 ob4 = new MultiThreadingLearn1();

        ob1.setName("Thread 1");
        ob2.setName("Thread 2");
        ob3.setName("Thread 3");
        ob4.setName("Thread 4");

        ob1.start();
        ob2.start();
        ob3.start();
        ob4.start();

        ob1.run();
        ob2.run();
        ob3.run();
        ob4.run();

    }
}
