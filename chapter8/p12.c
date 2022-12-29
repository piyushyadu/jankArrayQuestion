//*p8.12 Multiplication of two materices
#include<stdio.h>
#define rowA 3
#define colA 4
#define rowB 4
#define colB 2
int main(void)
{
    int A[rowA][colA], B[rowB][colB], P[rowA][colB], sum=0;
    for(int i=0; i<rowA; i++) for(int j=0; j<colA; j++) scanf("%d", &A[i][j]);
    for(int i=0; i<rowB; i++) for(int j=0; j<colB; j++) scanf("%d", &B[i][j]);

    for(int i=0; i<rowA; i++)
    {
        for(int j=0; j<colB; j++)
        {
            for(int k=0; k<colA; k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            P[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0; i<rowA; i++)
    {
        for(int j=0; j<colB; j++) printf("%d ",P[i][j]);
        printf("\n");
    }
    return 0;
}