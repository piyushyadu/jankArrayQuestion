//ex8.42
#include<stdio.h>
#define Row 25
#define Col 25
int main(void)
{
    int arr[Row][Col]={0}, r, c;
    printf("size(row,column)= ");
    scanf("%d,%d", &r, &c);
    printf("enter elements:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &arr[i][j]);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            arr[i][c]+=arr[i][j];
            arr[r][j]+=arr[i][j];
            arr[r][c]+=arr[i][j];
        }
    }

    printf("\n");
    for(int i=0; i<=r; i++)
    {
        for(int j=0; j<=c; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
