//*ex8.29 program to find leader in an array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int f;
    for(int i=0; i<n; i++)
    {
        f=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                f=0;
                break;
            }
        }
        if(f) printf("%d ", arr[i]);
    }

    return 0;
}