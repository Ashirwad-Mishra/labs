#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of numbers in the array: ");
    scanf("%d", &n);

    int A[n];
    printf("\nEnter the elements of the array (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int key;
    printf("\nEnter the number you are looking for in the array: ");
    scanf("%d", &key);

    int l = 0;
    int r = n - 1;

    while (l <= r && key >= A[l] && key <= A[r])
    {
        int estimation = l + (r - l) / (A[r] - A[l]) * (key - A[l]);

        if (A[estimation] == key)
        {
            printf("\nThe %d is found at position %d.\n", key, estimation + 1);
            return 0;
        }
        else if (A[estimation] < key)
        {
            l = estimation + 1;  
        }
        else
        {
            r = estimation - 1;  
        }
    }

    printf("\nThe %d is not found in the array.\n", key);
    return 0;
}
