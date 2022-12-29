//*p8.24 program to insert an item in a sorted array at the proper place by sifting other elements to the right
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements(shorted): ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("item= ");
    scanf("%d", &arr[n]);
    int i=n-1, temp;
    while(arr[i+1]<arr[i] && i>=0)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i--;
    }
    for(int i=0; i<n+1; i++) printf("%d ", arr[i]);
    return 0;
}