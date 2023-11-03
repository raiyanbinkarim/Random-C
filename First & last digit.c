#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("The las digit = %d\n",a%10);
    /*dividing the number by 10,till it's less trhan 10*/
    while(1)
    {
        a=a/10;
        if(a<10)
            break;
    }
    printf("First digit = %d",a);

}

