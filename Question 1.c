#include <stdio.h>
void natural(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Natural Numbers you want to print on the screen: ");
    scanf("%d",&number);
    printf("\n");
    natural(number);
    printf("\n");
    return 0;
}
void natural(int n)
{
    if(n!=0)
    {
        natural(n-1);
        printf("%d ",n);
    }
}
