#include<iostream>
using namespace std;

int LastbinearySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int  mid=start+(end-start)/2;
    int ans;
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if (key < arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;

}
int firstbinearySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int  mid=start+(end-start)/2;
    int ans;
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if (key < arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;

}
int main()
{
    int arr[9]={1,2,3,3,3,3,3,4,5};

    cout<<"Last Array of index : "<<LastbinearySearch(arr, 9, 3)<<endl;
    cout<<"First Array of index : " <<firstbinearySearch(arr, 9, 3)<<endl;
}