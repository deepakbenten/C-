#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int arr[], int size)
{
   for(int i=0; i<size-1; i++)
   {
    for(int j=0; j<size-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
    }
   }
}

int main()
{
    int arr[]={1,8,10,4,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, 5);
    cout<<"Bubble Sort : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    return 0;
}