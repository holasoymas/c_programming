#include<stdio.h>

void main(){
    int i, j, num;
    printf("Enter how many stars : ");
    scanf("%d",&num);

    printf("%d lines of stars ----->\n",num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}