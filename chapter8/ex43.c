//ex8.43 program to print a rectangular materix spirally
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max][Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter element:\n");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
    printf("\n");
    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        for(int k=i; k<=j; k++) printf("%d ", arr[i][k]);
        for(int k=i+1; k<j; k++) printf("%d ", arr[k][j]);
        for(int k=j; k>i; k--) printf("%d ", arr[j][k]);
        for(int k=j; k>i; k--) printf("%d ", arr[k][i]);
    }
    return 0;
}
