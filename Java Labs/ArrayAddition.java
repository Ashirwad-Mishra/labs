import java.util.Scanner;
public class ArrayAddition 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the lenghth of first Matrix: ");
        int n1 = sc.nextInt();
        System.out.println("Enter the breadth of first Matrix: ");
        int m1 = sc.nextInt();
        System.out.println("Enter the length of second Matrix: ");
        int n2 = sc.nextInt();
        System.out.println("Enter the breadth of second Matrix: ");
        int m2 = sc.nextInt();
        if (n1 != n2 || m1 != m2) 
        {
            System.out.println("Matrix addition is not possible.");
            return;
        }
        int arr1[][] = new int[n1][m1];
        int arr2[][] = new int[n2][m2];
        int sum[][] = new int[n1][m1];
        System.out.println("Enter the elements of first Matrix: ");
        for (int i = 0; i < arr1.length; i++) // For Rows
		{
			for (int j = 0; j < arr1[i].length; j++) // For Columns
			{
				System.out.println("Enter value for Row:"+ (i+1)+" "+"Column:"+ (j+1));
				arr1[i][j] = sc.nextInt();
			}
		}
        System.out.println("Enter the elements of second Matrix: ");
        for (int i = 0; i < arr2.length; i++) // For Rows 
        {
            for (int j = 0; j < arr2[i].length; j++) // For Columns
            {
                System.out.println("Enter value for Row:"+ (i+1)+" "+"Column:"+ (j+1));
                arr2[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < arr1.length; i++) 
        {
            for (int j = 0; j < arr1[i].length; j++) 
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        
        System.out.println("Sum of the two arrays:");
        for (int i = 0; i < sum.length; i++) 
        {
            for (int j = 0; j < sum[i].length; j++) 
            {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}