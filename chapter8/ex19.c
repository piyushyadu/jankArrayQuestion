//*ex8.19
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, l, h;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    l=h=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<l) l=arr[i];
        if(arr[i]>h) h=arr[i];
    }
    printf("difference= %d", h-l);
    return 0;
}