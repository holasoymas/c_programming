#include<stdio.h>

int sumIt(int);

void main(){
    int num;
    printf("Print the number upto that you want to print :");
    scanf("%d",&num);

    printf("The sum from 1 to %d is %d\n",num,sumIt(num));
}

int sumIt(int num){
    if (num < 1)
    {
        return 0;
    }else{
        return num + sumIt(num - 1);
    }
}