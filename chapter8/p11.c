//*p8.11 Addition of materices
#include<stdio.h>
#define row 3
#define col 4
int main(void)
{
    int A[row][col], B[row][col], Sum[row][col];
    for(int i=0; i<row; i++) for(int j=0; j<col; j++) scanf("%d", &A[i][j]);
    printf("   +\n");
    for(int i=0; i<row; i++) for(int j=0; j<col; j++) scanf("%d", &B[i][j]);
    for(int i=0; i<row; i++) for(int j=0; j<col; j++) Sum[i][j]=A[i][j]+B[i][j];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++) printf("%d ",Sum[i][j]);
        printf("\n");
    }
    return 0;
}