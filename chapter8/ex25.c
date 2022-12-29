//*ex8.25 program to remove duplicate elements form an unshorted array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int i=j; i<n-1; i++) arr[i]=arr[i+1];
                n--, j--;
            }
        }
    }
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
