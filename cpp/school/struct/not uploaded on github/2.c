#include<stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[50];
    int age;
    int Marks[5];
};
int main()
{
    struct student st[5];
    int n;
    printf("\nEnter 1 for entering details.\nEnter 2 for accessing detail.");
    scanf("%d",&n);
    getchar();
    switch (n)
    {
    case 1:
        {
            int in;
            printf("\nEnter 1 for entering detail of all students serially \nEnter roll number for entering detail of a particular student.");
            scanf("%d",&in);
            getchar();
            switch (in)
            {
            case 1:
            {
                int i = 0;
                while(i<5)
                {
                    st[i].roll=i+1;
                    printf("\nEnter name of roll number %d: ",i+1);
                    fgets(st[i].name, sizeof(st[i].name), stdin);
                    st[i].name[strcspn(st[i].name, "\n")] = '\0'; 
                    printf("Enter marks of %s: ", st[i].name);
                        for (int a = 0; a < 5; a++)
                        {
                            scanf("%d", &st[i].Marks[a]);
                        }
                        getchar(); 
                    i++;
                }
                break;
            }
            
        }
    case 2:
    {
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Roll: %d, Name: %s, Marks: ", st[i].roll, st[i].name);
        for (int j = 0; j < 5; j++) 
        {
            printf("%d ", st[i].Marks[j]);
        }
        printf("\n");
    }
    }
    default:
        break;
    }
}
}