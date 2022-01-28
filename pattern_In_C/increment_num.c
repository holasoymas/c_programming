#include<stdio.h>

void main(){
    int i, j, num;
    printf("How many numbers :");
    scanf("%d",&num);

    printf("%d numbers ------->\n",num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}