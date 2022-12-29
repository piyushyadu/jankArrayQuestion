//*p8.30 program to print a square materix spirally
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max][Max], n, start, end;
    printf("n= ");
    scanf("%d", &n);
    printf("enter elements(n*n no. of elements): ");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
    for(start=0, end=n-1; start<=end; start++, end--)
    {
        for(int i=start; i<end; i++) printf("%d ", arr[start][i]);
        for(int i=start; i<end; i++) printf("%d ", arr[i][end]);
        for(int i=end; i>start; i--) printf("%d ", arr[end][i]);
        for(int i=end; i>start; i--) printf("%d ", arr[i][start]);
    }
    return 0;
}