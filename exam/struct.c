#include<stdio.h>

struct Employee
{
    char name[20];
    long int phone;
    short int section;
};
void main(){
    int i;
    struct Employee emp[2];
    for ( i = 0; i < 2; i++)
    {
        printf("Enter name :");
        scanf("%s",emp[i].name);
        printf("Enter phone :");
        scanf("%ld",&emp[i].phone);
        printf("Enter Section :");
        scanf("%hd",&emp[i].section);
        printf("-------------->\n");
    }
    printf("The Employee Data are as follow :\n");
    for ( i = 0; i < 2; i++)
    {
        printf("Name : %s\t Phone : %ld\t Section : %hd\n", emp[i].name, emp[i].phone, emp[i].section);
    }
}
