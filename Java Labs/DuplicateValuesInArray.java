import java.util.Scanner;

public class DuplicateValuesInArray {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) 
        {
            System.out.println("Enter the " + (i + 1) + "th element of the array: ");
            arr[i] = sc.nextInt();
        }

        System.out.println("The duplicate values in the array are: ");
        findDuplicate(arr);
        sc.close();
    }

    public static void findDuplicate(int arr[]) 
    {
        boolean hasDuplicates = false;
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = i + 1; j < arr.length; j++) 
            {
                if (arr[i] == arr[j]) 
                {
                    System.out.println(arr[i]);
                    hasDuplicates = true;
                    break; 
                }
            }
        }
        if (!hasDuplicates) 
        {
            System.out.println("No duplicate values found.");
        }
    }
}