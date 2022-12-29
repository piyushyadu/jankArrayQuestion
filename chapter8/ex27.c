//*ex8.27 program to count number of inversions in an array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int s=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++) if(arr[i]>arr[j]) s++;
    }
    printf("number of inversion= %d", s);
    return 0;
}