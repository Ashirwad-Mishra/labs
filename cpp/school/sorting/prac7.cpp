 //Objective : Bubble Sort Algorithm.
 #include<stdio.h>
 int main()
 {
    int a[20], n, i, p, s;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(p = 0; p < n-1; p++)
    {
        for(s = 0; s < n-p-1; s++)
        {
            if(a[s] > a[s+1])
            {
                int
 t = a[s];
                a[s] = a[s+1];
                a[s+1] = t;
            }
        }
    }
    printf("Sorted array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
 }
