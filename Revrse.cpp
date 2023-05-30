#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while (start<=end)    
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={5,8,2,9,7,1};
    int rob[5]={9,12,5,20,11};

    reverse(arr, 6);
    reverse(rob, 5);

    printArray(arr, 6);
    printArray(rob, 5);
   
}