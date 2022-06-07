#include<stdio.h>
#include<string.h>

struct Employee
{
    char name[20];
    char post[20];
    int salary;
};
int main(){
    struct Employee e[10], temp[10];
    // char temp[20];
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
        
            if(strcmp(e[i].name, e[j].name) > 0){
                strcpy(temp[i].name, e[i].name);
                strcpy(e[i].name, e[j].name);
                strcpy(e[j].name, temp[i].name);

            }
        }
    }

    printf("Name\t Post\t Salary\t\n");
    for ( i = 0; i < num; i++)
    {
        printf("%s\t %s\t %d\t\n",e[i].name, e[i].post, e[i].salary);
    }
    return 0;
}