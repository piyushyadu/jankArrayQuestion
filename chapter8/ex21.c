//*ex21 function to reverse only first n element of an array
#include<stdio.h>
#define Max 25
void rev(int arr[], int n);
int main(void)
{
    int arr[Max], n, nth;
    printf("size= ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("enter nth term= ");
    scanf("%d", &nth);
    rev(arr, nth);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
void rev(int arr[], int nth)
{
    int c=nth/2, temp;
    for(int i=0; i<c; i++)
    {
        temp=arr[i];
        arr[i]=arr[nth-1-i];
        arr[nth-1-i]=temp;
    }
}