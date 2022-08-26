#include <stdio.h>
int numRev(int,int);
int main()
{
    int number=0;
    int rev=0;
    printf("Please Enter a Number to print it in its Reverse Form: ");
    scanf("%d",&number);
    printf("\nThe Given Number %d in the Reverse form is: %d\n",number,numRev(number,rev));
    return 0;
}
int numRev(int n, int r)
{
    if(n!=0)
    {
        r=r+n%10;
        r=r*10;
        n=n/10;
        numRev(n,r);
    }
    else
    {
        return r/10;
    }
}
