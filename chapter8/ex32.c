//*ex8.32 program to find element is a materix, where materix is sorted row-wise and column-wise
#include<stdio.h>
#define Row 25
#define Col 25
int main(void)
{
    int arr[Row][Col], r, c;
    printf("size(row,column)= ");
    scanf("%d,%d", &r, &c);
    printf("enter elements(sorted): ");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    int itm;
    printf("element to find= ");
    scanf("%d", &itm);
    for(int i=0; i<r; i++)
    {
        if(itm<=arr[r][c-1])
        {
            int l=0, h=c-1, mid;
            while(l<=h)
            {
                mid=(l+h)/2;
                if(itm>arr[i][mid]) l=mid+1;
                else if(itm<arr[i][mid]) h=mid-1;
                else
                {
                    printf("index of %d is (%d,%d)", itm, i, mid);
                    return 0;
                }
            }
        }
        if(itm<arr[i][0]) break;
    }
    printf("%d not found in materix", itm);
    return 0;
}
