//*p8.2 program to add elements of an array
#include<stdio.h>
int main(void)
{
    int arr[10], sum=0;
    for(int i=0; i<10; i++)
    {
        printf("Enter %d term of array: ", i+1);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("sum of all elements of array is %d\n", sum);
    return 0;
}