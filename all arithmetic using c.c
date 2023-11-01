/*C program to perform all arithmetic operations*/

#include<stdio.h>
int main()
{
    int first,second;
    printf("First Number= ");
    scanf("%d",&first);
    printf("Second Number= ");
    scanf("%d",&second);

    printf("Sum: %d\n",first + second);
    if(first>second)
    {
        printf("Difference: %d\n",first-second);
        printf("product: %d\n",first*second);
        printf("Quotient: %d\n",first/second);
        printf("Modulus:%d\n",first%second);
    }
    else if(second>first)
    {
        printf("Difference: %d\n",second-first);
        printf("product: %d\n",first*second);
        printf("Quotient: %d\n",second/first);
        printf("Modulus:%d\n",second%first);
    }
}
