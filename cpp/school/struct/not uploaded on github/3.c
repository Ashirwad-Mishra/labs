#include <stdio.h>
#include <string.h>

struct student 
{
    int roll;
    char name[50];
    int age;
    int Marks[5];
    char Address[200];
};

int main() 
{
    struct student st[15];
    int choice;
    int entered = 0;  

    while (1) 
    {
        printf("\nEnter 1 to enter details.\nEnter 2 to access details.\nEnter 3 to exit.\nChoose an option: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) 
        {
            case 1: 
            {
                if (entered >= 15) 
                {
                    printf("Maximum student entries reached.\n");
                    break;
                }
                printf("\nEntering details for student %d:\n", entered + 1);
                st[entered].roll = entered + 1;

                printf("Enter name of roll number %d: ", entered + 1);
                fgets(st[entered].name, sizeof(st[entered].name), stdin);
                st[entered].name[strcspn(st[entered].name, "\n")] = '\0';  

                printf("Enter the Address of %s: ", st[entered].name);
                fgets(st[entered].Address, sizeof(st[entered].Address), stdin);
                st[entered].Address[strcspn(st[entered].Address, "\n")] = '\0';  

                printf("Enter marks of %s (5 subjects): ", st[entered].name);
                for (int a = 0; a < 5; a++) 
                {
                    scanf("%d", &st[entered].Marks[a]);
                }
                getchar();  
                entered++;
                break;
            }
            case 2: 
            {
                if (entered > 0) 
                {
                    printf("\nStudent Details:\n");
                    for (int i = 0; i < entered; i++) 
                    {
                        printf("Roll: %d, Name: %s, Marks: ", st[i].roll, st[i].name);
                        for (int j = 0; j < 5; j++) 
                        {
                            printf("%d ", st[i].Marks[j]);
                        }
                        printf("\nAddress: %s\n", st[i].Address);
                    }
                } 
                else 
                {
                    printf("No details entered yet.\n");
                }
                break;
            }
            case 3:
            {
                printf("Exiting program.\n");
                return 0;
            }
            default:
            {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    }

    return 0;
}