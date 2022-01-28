#include<stdio.h>

void main(){
    FILE *ptr;
    int num;
    ptr = fopen("readInt.txt","r");
    
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n",num);
    fclose(ptr);
}