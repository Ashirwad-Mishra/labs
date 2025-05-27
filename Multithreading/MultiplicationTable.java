package Multithreading;
public class MultiplicationTable implements Runnable {
    private int number;

    public MultiplicationTable(int number) 
    {
        this.number = number;
    }

    public synchronized void run() 
    {
        for (int i = 1; i <= 10; i++) 
        {
            System.out.println(number + " x " + i + " = " + (number * i));
        }
    }
    
    public static void main(String[] args) throws InterruptedException 
    {
        MultiplicationTable table2 = new MultiplicationTable(2);
        MultiplicationTable table3 = new MultiplicationTable(3);
        MultiplicationTable table4 = new MultiplicationTable(4);
        MultiplicationTable table5 = new MultiplicationTable(5);

        Thread thread1 = new Thread(table2);
        Thread thread2 = new Thread(table3);
        Thread thread3 = new Thread(table4);
        Thread thread4 = new Thread(table5);

        thread1.start();
        thread2.start();
        thread3.start();
        thread4.start();
    }
}
