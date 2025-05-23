import java.util.Scanner;

public class JaggedArrayDynamic {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number of rows for the jagged array:");
        int numRows = sc.nextInt();
        
        int[][] arr = new int[numRows][];
        
        // Taking input for sizes of each row
        for (int i = 0; i < numRows; i++) 
        {
            System.out.println("Enter the size of row " + (i + 1) + ":");
            int rowSize = sc.nextInt();
            arr[i] = new int[rowSize];
        }
        
        // Initializing array with user inputs
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = 0; j < arr[i].length; j++) 
            {
                System.out.println("Enter value for Row:" + (i + 1) + " Column:" + (j + 1));
                arr[i][j] = sc.nextInt();
            }
        }
        
        // Displaying the values of the 2D Jagged array
        System.out.println("Elements of the 2D Jagged Array:");
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = 0; j < arr[i].length; j++) 
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}