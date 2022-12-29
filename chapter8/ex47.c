//*ex8.47 program to find kth smallest element in an array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter element: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int k;
    printf("k= ");
    scanf("%d", &k);
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("kth smallest term= %d", arr[n-k]);
    return 0;
}