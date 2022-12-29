//*ex8.23i short in dessending order using selection short
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int big, bigx, temp;
    for(int i=0; i<n-1; i++)
    {
        big=arr[i];
        bigx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>big)
            {
                big=arr[j];
                bigx=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[bigx];
        arr[bigx]=temp;
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}