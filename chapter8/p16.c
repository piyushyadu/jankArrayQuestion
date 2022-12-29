//*p8.16 program to convert a decimal number to binary, octal or hexadecimal
#include<stdio.h>
#define Size 32
int main(void)
{
    long int num;
    int base;
    char A[Size]={'0'};
    scanf("%d,%d", &num, &base);
    int i=Size, rem;
    while(num)
    {
        i--;
        rem=num%base;
        if(rem<10) A[i]='0'+rem;
        else A[i]='A'-10+rem;
        num/=base;
    }
    for(int j=i; j<Size; j++) printf("%C",A[j]);
    return 0;
}