//*p8.19 program to find smallest number in array and swap it with 0th element of array;
#include<stdio.h>
#define Max 50
int main(void)
{
    int A[Max], n;
    printf("size= ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("element= ");
        scanf("%d", &A[i]);
    }
    int sv=A[0], si=0;
    for(int i=0; i<n; i++)
    {
        if(sv>A[i])
        {
            sv=A[i];
            si=i;
        }
    }
    A[si]=A[0];
    A[0]=sv;
    for(int i=0; i<n; i++) printf("%d ",A[i]);
    return 0;
}