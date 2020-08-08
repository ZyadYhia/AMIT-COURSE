#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial=1;
    int fac;
    printf("please enter the Number .. ");
    scanf("%d",&fac);
    for(fac;fac>=1;fac--)
    {
        factorial*=fac;
    }
    printf("\nFactorial is: %d\n",factorial);
    return 0;
}
