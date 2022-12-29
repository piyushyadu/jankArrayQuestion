//*ex8.45 program to seprate negative number and positive no.
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter element: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int c, nDup=n;
    for(int i=0; i<nDup; i++)
    {
        c=arr[i];
        if(arr[i]>=0)
        {
            for(int j=i; j<nDup-1; j++) arr[j]=arr[j+1];
            arr[nDup-1]=c;
            nDup--,i--;
        }
    }
    printf("\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}