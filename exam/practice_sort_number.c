#include<stdio.h>

void main(){
    int i, j, count, temp;
    int number[100];
    printf("How many numbers : ");
    scanf("%d",&count);

    for ( i = 0; i < count; i++)
    {
        printf("Ente the numbers :");
        scanf("%d",&number[i]);
    }

    for ( i = 0; i < count; i++)
    {
        for ( j = i; j < count; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
            
        }
        
    }

    printf("Number in Assending Order !\n");
    
    for ( i = 0; i < count; i++)
    {
        printf("%d\t",number[i]);
    }
    
    printf("\n");
    
}