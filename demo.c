#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isFalse = false;
    if (!isFalse){
        printf("1\n");
    }else{
        printf("0\n");
    }

    bool isBalanced = false;
     for (int i = 0; i < 5; i++)
     {
        isBalanced = false;
        printf("printed\n");
        if (i == 3)
        {
            break;
        }
        
     }

    return 0;
}