//*ex8.50 program to rotate an array by input number
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter element: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int t, k;
    printf("enter no. of times to rotate= ");
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        k=arr[0];
        for(int j=1; j<n; j++) arr[j-1]=arr[j];
        arr[n-1]=k;
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}