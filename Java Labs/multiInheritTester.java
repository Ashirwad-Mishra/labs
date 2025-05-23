import java.util.Scanner;

// Main class implementing both interfaces
public class MultiInheritTester implements MultiInheritenceInterface, MLI2 {
    int d1, d2, d3, d4;

    // Implementing setter methods
    public void data1_setter(int d1) 
    {
        this.d1 = d1;
    }

    public void data2_setter(int d2) 
    {
        this.d2 = d2;
    }

    public void data3_setter(int d3) 
    {
        this.d3 = d3;
    }

    public void data4_setter(int d4) 
    {
        this.d4 = d4;
    }

    // Display method
    public void display() 
    {
        System.out.println("d1 = " + d1);
        System.out.println("d2 = " + d2);
        System.out.println("d3 = " + d3);
        System.out.println("d4 = " + d4);
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        MultiInheritTester obj = new MultiInheritTester();

        System.out.println("Enter d1: ");
        int d1 = sc.nextInt();

        System.out.println("Enter d2: ");
        int d2 = sc.nextInt();

        System.out.println("Enter d3: ");
        int d3 = sc.nextInt();

        System.out.println("Enter d4: ");
        int d4 = sc.nextInt();

        obj.data1_setter(d1);
        obj.data2_setter(d2);
        obj.data3_setter(d3);
        obj.data4_setter(d4);

        obj.display();
        sc.close();
    }
}