#include <stdio.h>
void reverse(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Natural Numbers you want to print in Reverse Order: ");
    scanf("%d",&number);
    printf("\n");
    reverse(number);
    printf("\n");
    return 0;
}
void reverse(int n)
{
    if(n!=0)
    {
        printf("%d ",n);
        reverse(n-1);
    }
}
