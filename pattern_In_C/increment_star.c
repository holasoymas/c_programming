#include<stdio.h>

void main(){
    int i, j, num;
    printf("How many stars do you want to print :");
    scanf("%d",&num);

    printf("%d stars ------>\n",num);
    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}