#include<stdio.h>
#include<string.h>

void main(){
    int i, j, count;
    char names[20][20], temp[20];

    printf("How many names :");
    scanf("%d",&count);

    for ( i = 0; i < count; i++)
    {
        printf("Eneter a name :");
        scanf("%s",names[i]);    
    }

    for ( i = 0; i < count; i++)
    {
        for ( j = i; j < count; j++)
        {
            if (strcmp(names[i],names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
            
        }
        
    }

    printf("Names in assending order ----> !\n");
    for ( i = 0; i < count; i++)
    {
        printf("%s\n", names[i]);
    }
    
    
    
    
}