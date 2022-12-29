//*p8.1 program to input values into an array and display them
#include<stdio.h>
int main(void)
{
    int arr[5];
    printf("Enter elements of array\n");
    for(int i=0; i<5; i++)
    {
        printf("Enter %d term: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("elements of array are\n");
    for(int i=0; i<5; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}