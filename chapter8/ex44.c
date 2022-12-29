//ex8.44 program to print spiral materix
#include<stdio.h>
#define Max 50
int main(void)
{
    int arr[Max][Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("\n");
    int c=1;
    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        for(int k=i; k<=j; k++) arr[i][k]=c++;
        for(int k=i+1; k<j; k++) arr[k][j]=c++;
        for(int k=j; k>i; k--) arr[j][k]=c++;
        for(int k=j; k>i; k--) arr[k][i]=c++;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
