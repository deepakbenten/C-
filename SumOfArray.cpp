#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    
    int n;
    cout<<"Enter the number size of arr : 5"<<endl;
    cin>>n;

    int* arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=getSum(arr, n);
    cout<<"Sum of : "<<result<<endl;
}