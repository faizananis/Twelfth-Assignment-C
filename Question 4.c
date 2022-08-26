#include <stdio.h>
void oddRev(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Odd Numbers you want to print in Reverse Order: ");
    scanf("%d",&number);
    printf("\n");
    oddRev(number);
    printf("\n");
    return 0;
}
void oddRev(int n)
{
    printf("%d ",n*2-1);
    if(n!=1)
    {
        oddRev(n-1);
    }
}
