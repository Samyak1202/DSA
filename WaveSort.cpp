#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void wavesort(int arr[], int n)
{
    for (int i = 1; i<n; i+=2)
    {
        if (arr[i]>arr[i-1])
        {
            swap(arr,i, i-1);
        }
        if (arr[i]>arr[i+1])
        {
            swap(arr,i, i+1);
        }
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    wavesort(arr, 6);

    for (int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}