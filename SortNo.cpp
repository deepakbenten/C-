#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       // cout<<arr[i]<<endl;

    }
}
int main()
{
    vector <int> arr{5,8,2,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,5);
    cout<<"Sorted Array :\n";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout << endl;
    return 0;
}