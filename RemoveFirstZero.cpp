#include<iostream>

using namespace std;
int main()
{
    char str[]="0000012345";
    char *p;

    for(p=str; *p&&*p=='0'; p++)
    cout<<p<<endl;
}