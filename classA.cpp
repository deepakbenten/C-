#include<iostream>
using namespace std;
int main(){
   int n ;
   int i;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<n<<"not a prime number "<<endl;
            break;
        }
       
    }
     if(n==i){
            cout<<n<<"prime number : "<<endl;
        }
}