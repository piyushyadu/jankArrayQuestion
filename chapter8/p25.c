//*p8.25 insertion sort
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, temp;
    printf("Size= ");
    scanf("%d", &n);
    printf("Elements= ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Sorted array= ");
    for(int i=1; i<n; i++)
    {
        for(int j=i-1; j>=0 && arr[j]>arr[j+1]; j--)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}