//*p8.17 linear search in an array
#include<stdio.h>
#define Max 50
int linearSrh(int arr[], int sz, int itm);
int main(void)
{
    int s, A[Max];
    printf("Enter size(<50): ");
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        int elm;
        printf("enter element: ");
        scanf("%d", &elm);
        A[i]=elm;
    }
    printf("enter item to srh: ");
    int item;
    scanf("%d", &item);
    int index;
    index= linearSrh(A, s, item);
    if(index!=-1) printf("%d has index %d", item, index);
    else printf("%d is not present in array", item);
    return 0;
}
int linearSrh(int arr[], int sz, int itm)
{
    int i=0;
    while(i<sz && itm!=arr[i]) i++;
    if(i<sz) return i;
    else return -1;
}