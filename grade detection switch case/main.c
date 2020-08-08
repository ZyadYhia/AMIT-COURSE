#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lit;
    printf("please insert letter.. ");
    scanf("%c",&lit);

    switch (lit){
        case 'E':
        case 'e':
            printf("\nThis is Excellent average 85 >> 100\n");
            break;

        case 'V':
        case 'v':
            printf("\nThis is Very Good average 75 >> 84\n");
            break;

        case 'G':
        case 'g':
            printf("\nThis is Good average 65 >> 74\n");
            break;

        case 'P':
        case 'p':
            printf("\nThis is Pass average 50 >> 64\n");
            break;

        case 'F':
        case 'f':
            printf("\nThis is Excellent average 0 >> 49\n");
            break;

        default:
            printf("Wrong Litter!!");
    }
    return 0;
}
