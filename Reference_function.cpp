#include<iostream>
using namespace std;

int update(int& n){
    n++;
    return n;
}
int main(){
    int n=5;
    cout<< "Before the print : "<<n<<endl;
    update(n);
    cout<<"After the print : "<<n<<endl;
}