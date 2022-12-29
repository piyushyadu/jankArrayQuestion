//*p8.5 program to reverse elements of an array
#include<stdio.h>
#define len 10
void printArray(int arr[],int l)
{
    for(int i=0; i<l; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main(void)
{
    int arr[len]={1,2,3,4,5,6,7,8,9,10}, temp, cond=len/2;
    printArray(arr,len);
    for(int i=0; i<cond; i++)
    {
        temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
    printArray(arr,len);
    return 0;
}