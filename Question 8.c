#include <stdio.h>
void binary (int);
int main()
{
    int number=0;
    printf("Please Enter a Number to print its Binary Form: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\nThe Binary Form of a Given Number %d is: ",number);
        binary(number);
    }
    else if(number==0)
    {
        printf("\nThe Binary Form of a Given Number %d is: 0",number);
    }
    else
    {
        printf("\nThe Neagtive Decimal Numbers are not applicable for this Program.");
    }
    printf("\n");
    return 0;
}
void binary(int n)
{
    if(n!=0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}
