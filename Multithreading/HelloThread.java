package Multithreading;
class HelloThread implements Runnable {
    public void run() 
    {
        System.out.println("Hello from a thread!");
    }

    public static void main(String[] args) throws InterruptedException {
        HelloThread helloThread1 = new HelloThread();
        HelloThread helloThread2 = new HelloThread();
        HelloThread helloThread3 = new HelloThread();
        HelloThread helloThread4 = new HelloThread();
        HelloThread helloThread5 = new HelloThread();
        Thread thread1 = new Thread(helloThread1);
        Thread thread2 = new Thread(helloThread2);
        Thread thread3 = new Thread(helloThread3);
        Thread thread4 = new Thread(helloThread4);
        Thread thread5 = new Thread(helloThread5);
        thread1.start();
        Thread.sleep(1000);
        thread2.start();
        Thread.sleep(1000);
        thread3.start();
        Thread.sleep(1000);
        thread4.start();
        Thread.sleep(1000);
        thread5.start();
    }
}