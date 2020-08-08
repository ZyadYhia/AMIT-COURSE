#include <stdio.h>
#include <stdlib.h>

int x;
int y;

int main()
{
    printf("This's the first assignment of AMIT Embedded System course.\n\n");

    //Inserting 1st Number.
    printf("Enter your first number:");
    scanf("%d",&x);
    //Inserting 2nd Number.
    printf("Enter your second number:");
    scanf("%d",&y);

    printf("\n\nYou entered %d",x);
    printf("  and %d",y);
    printf(" as a first and second numbers\n\n");

    //printing  Addition
    printf("\n --The sum of those numbers is            :%d\n",x+y);
    //printing Subtract
    printf(" --The Subtract of those numbers is       :%d\n",x-y);
    //printing Multiplication
    printf(" --The Multiplication of those numbers is :%d\n",x*y);
    //printing Division
    printf(" --The Division of those numbers is       :%d\n",x/y);
    //printing Reminder
    printf(" --The Reminder of those numbers is       :%d\n",x%y);
    return 0;
}
