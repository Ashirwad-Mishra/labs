#include <stdio.h>
int main()
{
    int A[7] = {12,13,14,15,16,17,18};
    printf("The address of %d is %p.",A[4],&A[0]+sizeof(int)*(4-0));
    printf("\n%p",A[3]);
}