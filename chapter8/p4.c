//*p8.4 program to find largest and smallest number from an array
#include<stdio.h>
int main(void)
{
    int arr[10]={1,6,3,9,2,4,9,3,8,6};
    int sm=arr[0], la=arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]<sm) sm=arr[i];
        if(arr[i]>la) la=arr[i];
    }
    printf("smallest number is %d\n", sm);
    printf("largest number is %d\n", la);
    return 0;
}