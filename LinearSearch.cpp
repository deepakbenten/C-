#include<iostream>
using namespace std;
int search(int arr[] , int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={12, -2, 78, -6, 10, 18, 50, 40, 32, 60};
    int key;
    int size=sizeof(arr)/sizeof(int);
    cout<< "Enter the search element : " <<endl;
    cin>>key;

   int result= search(arr, size , key);
   if(result)
   {
    cout << "yes" <<endl;
   }
   else{
    cout<< "No" << endl;
   }

}