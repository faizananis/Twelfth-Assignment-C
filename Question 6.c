#include <stdio.h>
void evenRev (int);
int main()
{
    int number=0;
    printf("Please Enter that how many Even Numbers in Reverse Order you want to print: ");
    scanf("%d",&number);
    printf("\n");
    evenRev(number);
    printf("\n");
    return 0;
}
void evenRev(int n)
{
    printf("%d ",n*2);
    if(n!=1)
    {
        evenRev(n-1);
    }
}
