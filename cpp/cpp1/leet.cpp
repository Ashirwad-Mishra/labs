#include <iostream>
int main()
{
    int A[] = { 1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1};
    int streak = 0;
    int max = 0;
    for (auto x:A)
    {
        if (x==1)
        {
            streak +=1;
        }
        else if (x==0)
        {
            streak = 0;
        }
        if (streak>max)
        {
            max = streak;
        }
    }
    std :: cout << "Maximum iteration of 1: " << max;

}