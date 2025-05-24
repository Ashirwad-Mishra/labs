#include <iostream>
using namespace std;
void merge(int Arr[],int l ,int m , int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int A[n1] , B[n2];
    for (int i = 0 ; i < n1 ; i++)
    {
        A[i] = Arr[l+i];
    
    }
    for (int i = 0 ; i < n2 ; i++)
    {
        B[i] = Arr[m+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (A[i]<=B[j])
        {
            Arr[k] = A[i];
            i++;
        }
        else 
        {
            Arr[k] = B[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        Arr[k] = A[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        Arr[k] = B[j];
        j++;
        k++;
    }
}
void sort(int Arr[],int l , int h)
{
    if (l<h)
    {
        int m = (l+h)/2;
        sort(Arr,l,m);
        sort(Arr , m + 1 , h );
        merge(Arr,l,m,h);
    }
}
int main()
{
    int n ; 
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int A[n];
    cout << "\nEnter the array: ";
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> A[i];
    }
    sort(A,0,n-1);
    cout << "\nThe sorted array: ";
    for (int i = 0 ; i < n ; i ++)
    {
        cout << A[i] << " ";
    }
}