//*ex8.18
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, temp;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=1; i<n; i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}