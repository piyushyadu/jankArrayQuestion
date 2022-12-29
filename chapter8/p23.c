//*p8.23 program to insert an item in an array at a specified index by moving other elements to the right
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int ind=Max;
    while(1)
    {
        printf("index= ");
        scanf("%d", &ind);
        if(ind<n && n>=0) break;
        else printf("invalid input\n");
    }
    printf("item= ");
    scanf("%d", &arr[n]);
    int temp;
    for(int i=n; i>ind; i--)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    for(int i=0; i<n+1; i++) printf("%d ", arr[i]);
    return 0;
}