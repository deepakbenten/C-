#include<stdio.h>
int main()
{
    int a=10;
    int* ptr=&a;
    
    printf("My program started......\n");
    printf("a value of %d\n",a);
    printf("ptr of %p\n",ptr);
    printf("value of ptr %d\n",ptr);
    return 0;
}