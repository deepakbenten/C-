#include<iostream>
using namespace std;

int fibonaccie(int n)
{
    int a=0;
    int b=1;
    int sum=0;
    for(int i=2; i<=n; i++)
    {
        sum=a+b;
        if(sum<=n)
        {
            cout<< sum <<" ";
            a=b;
            b=sum;
        }
        
    }
    
}
int main()
{
    int n;
    
   
    cout<<"Enter the number "<<endl;
    cin>>n;
    fibonaccie(n);
    return 0;
}