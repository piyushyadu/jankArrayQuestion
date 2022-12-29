//*ex8.37 program to out whether a square materix is symmetri or not
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max][Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements:\n");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                printf("\nnot symmetric materix");
                return 0;
            }
        }
    }
    printf("symmetric materix");
    return 0;
}