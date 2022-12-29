//*p8.18 Binary search in an array
#include<stdio.h>
#define Max 50
int BinSrh(int arr[], int sz, int itm);
int main(void)
{
    int n, A[Max];
    printf("size= ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int elm;
        printf("element= ");
        scanf("%d", &elm);
        A[i]=elm;
    }
    int m;
    printf("item= ");
    scanf("%d", &m);
    int index=BinSrh(A, n, m);
    if(index!=-1)printf("index of item= %d", index);
    else printf("item not found");
    return 0;
}
int BinSrh(int arr[], int sz, int itm)
{
    int a=0, b=sz;
    while(a<=b)
    {
        int t=(a+b)/2;
        if(arr[t]==itm) return t;
        else if(itm<arr[t]) b=t-1;
        else a=t+1;
    }
    return -1;
}