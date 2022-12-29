//*p8.20 selection sort
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, indLow, temp;
    printf("size= ");
    scanf("%d", &n);
    printf("Enter elements:- ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    {
        indLow=i;
        for(int j=i; j<n; j++)
        {
            if(arr[j]<arr[indLow]) indLow=j;
        }
        temp=arr[i];
        arr[i]=arr[indLow];
        arr[indLow]=temp; 
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}