//*ex8.38 recursive func to find sum of even no. inn an array
#include<stdio.h>
#define Max 25
int sumEven(int arr[], int n);  //wrong output code failed.
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("sum of even no.= %d", sumEven(arr, n));
    return 0;
}
int sumEven(int arr[], int n)
{
    int f=0, i;
    for(i=n-2; i>=0; i--)
    {
        if(arr[i]%2==0)
        {
            f=1;
            break;
        }
    }
    printf("%d\n", arr[i]);
    if(n%2==0 && f) arr[i]+=arr[n-1];
    if(f) return sumEven(arr, i+1);
    else return arr[n-1];
}