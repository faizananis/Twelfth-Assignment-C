#include <stdio.h>
void even(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Even Numbers you want to print: ");
    scanf("%d",&number);
    printf("\n");
    even(number);
    printf("\n");
    return 0;
}
void even(int n)
{
    if(n!=1)
    {
        even(n-1);
    }
    printf("%d ",n*2);
}
