//*ex8.24 program to chk weather all elements of an array are distinct
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int c;
    for(int i=0; i<n; i++)
    {
        c=1;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j]) c--;
        }
        if(c<0)
        {
            printf("all elements are not distinct");
            return 0;
        }
    }
    printf("all elements are distinct");
    return 0;
}