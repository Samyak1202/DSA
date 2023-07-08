#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>> n;

    int arr[n];
    cout<<"Enter array values"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int curr;
    for(int i = 1; i<n; i++)
    {
        curr = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>curr)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;

    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}