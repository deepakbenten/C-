#include<iostream>
using namespace std;
int main(){

    int i=5;
    int& j=i;
    i++;
    j++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;

    return 0;
}