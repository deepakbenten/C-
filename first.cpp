#include<iostream>
void hello(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int display(int arr[], int size, int element, int capacity, int index)
{
    
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
    return 1;
}
int main()
{
    int arr[100]={12,15,9,20,5,30};
    int size=6, element=50, index=3;
    hello(arr, size);
    display(arr, size,element,100,index);
    size+=1;
    hello(arr, size);
    return 0;
}