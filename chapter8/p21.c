//*p8.21 
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, temp, xchanges=0;
    printf("size= ");
    scanf("%d", &n);
    printf("Enter elements:- ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n-1; i++) if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        xchanges+=1;
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nnumber of changes are %d", xchanges);
    return 0;
}