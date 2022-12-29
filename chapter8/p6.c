//*p8.6 program to convert decimal number to binary number
#include<stdio.h>
void printArray(int arr[], int l);
int main(void)
{
    int num, arr[16]={0}, i=16;
    printf("E= ");
    scanf("%d", &num);
    while(num)
    {
        i--;
        arr[i]=num%2;
        num/=2;
    }
    // printArray(arr, 16);
    for(;i<16;i++) printf("%d", arr[i]);
    return 0;
}
void printArray(int arr[], int l)
{
    for(int i=0; i<l; i++) printf("%d", arr[i]);
}