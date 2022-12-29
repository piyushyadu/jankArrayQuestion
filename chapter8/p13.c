//*p8.13 Transverse of a materix
#include<stdio.h>
#define row 3
#define col 4
int main(void)
{
    int A[row][col], B[col][row];
    for(int i=0; i<row; i++) for(int j=0; j<col; j++) scanf("%d", &A[i][j]);
    for(int i=0; i<col; i++) for(int j=0; j<row; j++) B[i][j]=A[j][i];
    printf("\n");
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++) printf("%d ",B[i][j]);
        printf("\n");
    }
    return 0;
}