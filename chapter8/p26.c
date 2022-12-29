//*p8.26 program of merging two sorted arrays into a third sorted array
#include<stdio.h>
#define Max 50
int main(void)
{
    int A[Max], B[Max], C[2*Max], a=0, b=0, na, nb;
    printf("size(A,B)= ");
    scanf("%d,%d", &na, &nb);
    printf("elements of A= ");
    for(int i=0; i<na; i++) scanf("%d", &A[i]);
    printf("elements of B= ");
    for(int i=0; i<nb; i++) scanf("%d", &B[i]);
    
    for(int i=0; i<na+nb; i++)
    {
        if(A[a]<B[b] && a<na)
        {
            C[i]=A[a];
            a++;
        }
        else if(b<nb)
        {
            C[i]=B[b];
            b++;
        }
    }
    printf("sorted murge of A and B\n");
    for(int i=0; i<na+nb; i++) printf("%d ", C[i]);
    return 0;
}