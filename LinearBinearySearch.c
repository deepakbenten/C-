#include<stdio.h>
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[]={5,10,9,15,12,20,25,18};
    int size= sizeof(arr)/sizeof(int);
    int element=18;
    int searchindex=LinearSearch(arr, size, element);
    printf("the element of %d was found of %d",element,searchindex);
    return 0;
}