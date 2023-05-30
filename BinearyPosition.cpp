#include<iostream>
using namespace std;

int getPosition(int arr[], int n)
{
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6]={3,8, 10, 17, 1};

    cout<< "Index position of Array : " << getPosition(arr, 6);

}