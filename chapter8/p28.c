//*p8.28 magic matrix
#include<stdio.h>
#define Max 20
int main(void)
{
    int arr[Max][Max], n=2, r, c;
    while(n%2==0)
    {
        printf("enter n(odd)= ");
        scanf("%d", &n);    
    }
    r=n-1, c=n/2;
    for(int i=1; i<n*n+1; i++)
    {
        if(r>=n) r=0;
        if(c<0) c=n-1;
        arr[r][c]=i;
        if(i%n==0) r--;
        else r++, c--;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}