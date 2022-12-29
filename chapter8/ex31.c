//*ex8.31 program to sort materix row wise and column wise
#include<stdio.h>
#define Row 25
#define Col 25
int main(void)
{
    int arrR[Row][Col], arrC[Row][Col], r, c;
    printf("size(row,column)= ");
    scanf("%d,%d", &r, &c);
    printf("enter elements: ");
    int elm;
    for(int i=0; i<r; i++) for(int j=0; j<c; j++)
    {
        scanf("%d", &elm);
        arrC[i][j]=arrR[i][j]=elm;
    }
    int temp;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c-1; j++)
        {
            for(int k=0; k<c-1-j; k++)
            {
                if(arrR[i][k]>arrR[i][k+1])
                {
                    temp=arrR[i][k];
                    arrR[i][k]=arrR[i][k+1];
                    arrR[i][k+1]=temp;
                }
            }
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r-1; j++)
        {
            for(int k=0; k<r-1-j; k++)
            {
                if(arrC[k][i]>arrC[k+1][i])
                {
                    temp=arrC[k][i];
                    arrC[k][i]=arrC[k+1][i];
                    arrC[k+1][i]=temp;
                }
            }
        }
    }
    printf("\nsorted Row-wise\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) printf("%d ", arrR[i][j]);
        printf("\n");
    }
    printf("\nsorted Column-wise\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) printf("%d ", arrC[i][j]);
        printf("\n");
    }
    return 0;
}