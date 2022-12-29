//*ex8.23iii program to sort in desending order using insertion sort
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int j, k;
    for(int i=1; i<n; i++)
    {
        k=arr[i];
        for(j=i-1; j>=0 && k>arr[j]; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=k;
    }

    printf("desending order: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}