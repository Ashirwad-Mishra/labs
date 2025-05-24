#include <iostream>
int main ()
{
    int A[6] = {24,34,56,78,89,90};
    int key = 90;
    int low=0,high=6,mid;
    // sweta ma'am's method
  /*  for (int i = 0; i<6;i++)
    {
        mid = (low + high)/2;
        if (A[mid] != key)
        {
            if (A[mid]<key)
            {
                low = mid + 1;
            }
            else high = mid -1;
        }
        else if (A[mid]==key){
            std :: cout << "The key is at "<<mid;
             break;
        }
        if (low>high)
        {
            std:: cout << "The key is not found";
            break;
        }
        
        //std :: cout << "the key is at " << mid;
    }*/
   //abdul sir's method
    while (low<=high)
    {
        mid = (low + high)/2;
        if (A[mid]>key)
        {
            high = mid - 1;
        }
        else if (A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            std:: cout << "The key is found at "<< mid;
            return 0;
        }
    }
 std :: cout <<"The key is not found.";
}