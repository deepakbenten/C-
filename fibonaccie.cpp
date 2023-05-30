#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int sum=0;
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        sum=a+b;
       if(sum<=n)
        {
            cout<<sum <<" ";
            a=b;
            b=sum;
        }

           
    }
    

}