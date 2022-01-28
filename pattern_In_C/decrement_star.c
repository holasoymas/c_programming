#include<stdio.h>

void main(){
    int i, j, num;
    printf("How many stars :");
    scanf("%d",&num);

    printf("%d stars ------>\n",num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}