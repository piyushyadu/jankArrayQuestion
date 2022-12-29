//*ex8.20 program to find largest and second largest element in an array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n, temp;
    printf("size= ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("largest number= %d\n", arr[n-1]);
    printf("largest number= %d", arr[n-2]);
    return 0;
}