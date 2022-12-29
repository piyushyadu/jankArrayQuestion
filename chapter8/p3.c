//*p8.3 program to count even and odd number in an arry
#include<stdio.h>
int main(void)
#define size 10
{
    int arr[size], even=0, odd=0;
    for(int i=0; i<size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("no. of odd element: %d\nno. of even element: %d\n", odd, even);
    return 0;
}