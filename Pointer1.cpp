#include<iostream>
using namespace std;

int main(){


    // int num=10;
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // int *ptr=&num;
    // cout<<"Value of  "<< *ptr<<endl;
    
    // cout<<"Address Value of  "<< ptr<<endl;


    // int i=5;
    // int a=i;
    // a++;
    // cout<<"value of i : "<<i<<endl;
    // cout<<"value of a : "<<a<<endl;
    // int *p=&i;
    // (*p)++;
    // cout<<"value of i : "<<i<<endl;


    int arr[10]={2,5,9};
    cout<<"Address of first memory block : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block : "<< &arr[0]<<endl;
    cout<<"4th : " <<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<"5th :" << (*arr)+1 <<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<"6th : "<< (*arr+2)<<endl;


    return 0;
}