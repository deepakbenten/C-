#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a;
    cin>>b;
    int ans=1;
    for(int i=1; i<=b; i++)
    {
        ans=ans*a;
    }
    cout<<"Answer is : "<<ans<<endl;
}