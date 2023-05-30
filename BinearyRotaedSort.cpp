#include<iostream>
using namespace std;


int getPivot(vector<int>& arr, int n)
{
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>= arr[0])        
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int BinearySearch(vector<int>& arr, int start, int end, int key)
{
    int start=start, end=end;
    int mid=start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if(key > arr[mid] )
        {
            start=mid+1;
        }
        if(key < arr[mid])
        {
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1])
    {
        return binearySearch(arr, pivot, n-1, k);
    }
    else{
        return binearySearch(arr, 0, pivot-1, k);
    }
}

int main()
{
    int arr[6]={4,2,7,9,5,1};
}