#include <stdio.h>
void square (int);
int main()
{
    int number=0;
    printf("Please Enter that how many Squares of Natural Numbers you want to  print: ");
    scanf("%d",&number);
    printf("\n");
    square(number);
    printf("\n");
    return 0;
}
void square (int n)
{
    if(n!=1)
    {
        square(n-1);
    }
    printf("%d ",n*n);
}
