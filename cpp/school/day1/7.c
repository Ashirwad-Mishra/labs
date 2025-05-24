#include <stdio.h>
int main()
{
    int Temp;
    printf ("Enter the temparature in oC: ");
    scanf("%d",&Temp);
    if (Temp < 0) printf("Freezing weather");
    else if (Temp < 10) printf("Very Cold weather");
    else if (Temp < 20) printf("Cold weather");
    else if (Temp < 30) printf("Normal in Temp");
    else if (Temp < 40) printf("Its Hot");
    else if (Temp >=40) printf ("Its Very Hot");
}