#include<iostream>
using namespace std;

int main()
{
    int n;
    int hunderad=100;
    int fifty=50;
    int twenty=20;
    int ten=10;
    int s;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int ch=1;
    switch (ch)    
    {
    case 1 : s=n/hunderad;
            
             s/=twenty;
             s/=ten;
        continue;
        case 2:  s/=fifty;
    
    default:
        break;
    }

}