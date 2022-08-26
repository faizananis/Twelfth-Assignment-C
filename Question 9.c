#include <stdio.h>
void octal(int);
int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\nThe Octal Form of a given Number %d is: ",number);
        octal(number);
    }
    else if(number==0)
    {
        printf("\nThe Octal Form of a given Number 0 is: 0");
    }
    else
    {
        printf("\nThe Negative Decimal Numbers are not applicable for this Program.");
    }
    printf("\n");
    return 0;
}
void octal(int n)
{
    if(n>0)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}

