#include<stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void deletion(int arr[], int size, int index )
{
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[100]={10,5,12,19,22,25};
    int size=6, index=2;
    display(arr, size);
    deletion(arr, size, index);
    size-=1;
    display(arr, size);
    return 0;
}