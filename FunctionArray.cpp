#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout <<"Print in Array no." << endl;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " " ;
    }
   cout <<"Print Done"<<endl;
}
int main()
{
    int first[15]={2};
    int n=14;
    printArray(first,n);
    int FirstSize=sizeof(first)/sizeof(int);
    cout << "size of First :" <<FirstSize <<endl;
    cout <<"index of size "<<first[1] <<endl;
    return 0;
}