//*ex8.34 program to reverse rows of materix
#include<stdio.h>
#define Row 25
#define Col 25
int main(void)
{
    int arr[Row][Col], r, c;
    printf("size(row,column)= ");
    scanf("%d,%d", &r, &c);
    printf("enter elements:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &arr[i][j]);
    int temp;
    for(int i=0; i<r/2; i++)
    {
        for(int j=0; j<c; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[r-1-i][j];
            arr[r-1-i][j]=temp;
        }
    }
    printf("\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
