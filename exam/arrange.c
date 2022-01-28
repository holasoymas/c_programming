#include<stdio.h>

void main(){
    int temp, i, j, count;
    int num[100];
    printf("How many numbers ?");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        printf("Enter the numbers : ");
        scanf("%d",&num);        
    }

    for ( i = 0; i < count; i++)
    {
        for ( j = i; i < count; j++)
        {
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        
    }
    printf("Number in assending order ----->\n");
    for ( i = 0; i < count; i++)
    {
        printf("%d\n",num[i]);   
    }
}