#include<iostream>
using namespace std;
//#define MAX 1000000000
//#define MIN -1000000000
int getMax(int num[], int n)
{
    auto max=num[0];
    for(int i=0; i<n; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{
    int min=num[0];
    for(int i=0; i<n; i++)
    {
       if(num[i]<min)
       {
         min=num[i];
       }
    }
    return min;
}
int main()
{
    int size;
    cout<<"Enter the Array Length size Number : "<<endl;
    cin>>size;

    int number[100];
    for(int i=0; i<size; i++)
    {
        cin>>number[i];
    }
    cout<<"Maximum number of Array : " << getMax(number, size) << endl;
    cout<<"Minimum number of Array : " << getMin(number, size) << endl;
    return 0;
}