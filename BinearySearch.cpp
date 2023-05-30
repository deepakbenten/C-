#include<iostream>
using namespace std;
int binearySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;
        while (start<=end)
        {
            if(arr[mid]==key)
            {
                return mid;
            }
            if(key > arr[mid])
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,5,7,9,11};

    int evenIndex=binearySearch(even, 6, 8);
    cout<< "Even index of " <<evenIndex<<endl; 

    int oddIndex=binearySearch(odd, 5, 11);
    cout<< "Odd index of " <<oddIndex<<endl; 
}