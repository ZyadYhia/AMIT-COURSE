#include <stdio.h>
#include <stdlib.h>

int NoOfChar(char let, char* pName); //get the character needed to be counted;
int main()
{
    char Name[] ="hi here iam hearing hedic";
    printf("Number of H is %d\n", NoOfChar('h',Name));
    return 0;
}
int NoOfChar(char let, char* pName) //get the character needed to be counted;
{
    int counter=0;

    for(int i=0; pName[i]!= '\0' ;i++){
        if(pName[i] == let){
            counter++;
        }

    }
    return counter;
}
