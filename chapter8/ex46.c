//*ex8.46 
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], next_ge[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter element: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;;j++)
        {
            if(j==n)
            {
                next_ge[i]=-1;
                break;
            }
            else if(arr[i]<arr[j])
            {
                next_ge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0; i<n; i++) printf("%d ", next_ge[i]);
    return 0;
}