#include<stdio.h>
#include<stdbool.h>

struct Employee
{
    char name[10];
    int floor;
    int number;
};

void main(){
    struct Employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter a name : ");
        scanf("%s",emp[i].name);

        printf("Enter a floor : ");
        scanf("%d",&emp[i].floor);

        printf("Enter a number : ");
        scanf("%d",&emp[i].number);
    }
    printf("\n Employee list --------->\n");
    printf("Name\t Floor\t Number\t\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\t %d\t %d\t\n",emp[i].name,emp[i].floor,emp[i].number);
    }
}