import java.util.Scanner;

public class Array_Prac 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of first array: ");
        int n = sc.nextInt();
        int Arr[] = new int[n];

        for (int i = 0 ; i < n ; i++)
        {
            System.out.println("Enter the " + (i + 1) + "th element of the array: ");
            Arr[i] = sc.nextInt();
        }

        System.out.println("The element of the arrays: ");
        for (int i = 0 ; i < n ; i++)
        {
            System.out.println(Arr[i]);
        }

        System.out.println("Enter the length of 2D array: ");
        n = sc.nextInt();

        System.out.println("Enter the breadth of the array: ");
        int m = sc.nextInt();
        int Arr2[][] = new int[n][m];
        for (int i = 0 ; i < n ; i++)
        {
            System.out.println("Enter elements of " + (i+1) + "th coloumn: ");
            for (int j = 0 ; j < m ; j++)
            {
                System.out.println("Enter " + (j + 1) + "th element: " );
                Arr2[i][j] = sc.nextInt();
            }
        }
        
        for (int i = 0 ; i < n ; i++)
        {
            System.out.println("The elements of " + (i+1) + "th coloumn: ");
            for (int j = 0 ; j < m ; j++)
            {
                System.out.println("The " + (i + 1) + "th element: " + Arr2[i][j]) ;
            }
        }
        sc.close();
    }
}