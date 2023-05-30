#include<iostream>
using namespace std;

void sumPrint(int num[], int size)
{
    int sum;
    for(int i=0; i<size; i++)
    {
        sum+=num[i];
    }

}
int main()
{
    int size;
    cout << "Enter the number : " <<endl;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];   
    }    
}