#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade=0;

    printf("Please Insert Your Grade..  ");
    scanf("%d",&grade);

    if (grade>=85){printf("\nYour grade is Excellent\n");}
    else if(grade>=75){printf("\nYour grade is Very Good\n");}
    else if(grade>=65){printf("\nYour grade is Good\n");}
    else if(grade>=50){printf("\nYour grade is Pass\n");}
    else if(grade<50){printf("\nYou Failed!!\n");}
    return 0;
}
