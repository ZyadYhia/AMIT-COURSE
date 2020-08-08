#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade=0;

    printf("Please Insert Your Grade..\n");
    scanf("%d",&grade);

    if (grade>=85){printf("Your grade is Excellent");}
    else if(grade>=75){printf("Your grade is Very Good");}
    else if(grade>=65){printf("Your grade is Good");}
    else if(grade>=50){printf("Your grade is Pass");}
    else if(grade<50){printf("You Failed!!");}
    return 0;
}
