// write the program input seven number in  1 D  program
#include <stdio.h>

void main() {
    int ar[7];
    int i ;
    printf("enter seven number= ");
    for(i=0;i<=6;i++)
{
    scanf("%d", & ar[i]);
}  
    for(i=0;i<=6;i++)
    {
        printf("%d",ar[i]);
    }
}