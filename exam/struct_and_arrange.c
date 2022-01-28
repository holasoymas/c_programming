#include<stdio.h>

struct Employee
{
    char name[20];
    char post[20];
    int salary;
};
void main(){
    struct Employee e[10], temp;
    int i, j, num;
    printf("How many employee ---> ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        printf("Enter name --->");
        scanf("%s",e[i].name);
        printf("Enter post --->");
        scanf("%s",e[i].post);
        printf("Enter salary --->");
        scanf("%d",&e[i].salary);
        printf("-------->\n");
    }
    for ( i = 0; i < num; i++)
    {
        for ( j = i; j < num; j++)
        {
            if(e[i].salary > e[j].salary){
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }    
    }

    printf("Name\t Post\t Salary\t\n");
    for ( i = 0; i < num; i++)
    {
        printf("%s\t %s\t %d\t\n",e[i].name, e[i].post, e[i].salary);
    }
}