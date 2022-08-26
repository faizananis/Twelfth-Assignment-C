#include <stdio.h>
void odd(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Odd Numbers you want to print on the Screen: ");
    scanf("%d",&number);
    printf("\n");
    odd(number);
    printf("\n");
    return 0;
}
void odd(int n)
{
    if(n!=0)
    {
        odd(n-1);
        printf("%d ",n*2-1);
    }
}
