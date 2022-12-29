//*ex8.26 program to remove duplicate elements form an sorted array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements(sorted): ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int k=arr[0];
    for(int i=1; i<n; i++)
    {
        if(k==arr[i])
        {
            for(int j=i; j<n-1; j++) arr[j]=arr[j+1];
            i--, n--;
        }
        else k=arr[i];
    }

    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}