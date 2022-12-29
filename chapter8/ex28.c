//*ex8.28 program to find most frequent element in a sorted array
#include<stdio.h>
#define Max 25
int main(void)
{
    int arr[Max], n;
    printf("size= ");
    scanf("%d", &n);
    printf("enter elements(sorted): ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int elm=arr[0], subCt=1, ct=1, id=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==elm) subCt++;
        else elm=arr[i], subCt=1;
        if(subCt>ct)
        {
            ct=subCt;
            id=i;
        }
    }
    printf("most frequent element= %d", arr[id]);
    return 0;
}