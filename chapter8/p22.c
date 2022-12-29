//*p8.22 Bubble sort
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max], n, temp, x=0;
    printf("size= ");
    scanf("%d", &n);
    printf("Enter elements:- ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++)
    {
        x=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                x+=1;
            }
        }
        if(x==0) break;
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}