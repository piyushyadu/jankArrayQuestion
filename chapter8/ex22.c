//*ex8.22 function to short and display its contant in assending and desending order
#include<stdio.h>
#define Max 25
int AssDes(int arr[], int n);
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    AssDes(arr, n);
    return 0;
}
int AssDes(int arr[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("assending order: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\ndesending order: ");
    for(int i=n-1; i>=0; i--) printf("%d ", arr[i]);
}