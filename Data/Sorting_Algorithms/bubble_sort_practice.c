#include<stdio.h>
#include <stdbool.h>
#define max 10

int list[max] = {6, 8, 3, 5, 2, 1, 9, 0, 4, 7};

void display(){
    printf("[");
    for (int i = 0; i < max; i++)
    {
        printf("%d ",list[i]);
    }
    printf("]\n");
}

void bubbleSort(){
    int temp;
    bool swaped = false;
    // iterate throught all items 
    for (int i = 0; i < max - 1; i++)
    {
        swaped = false;
        for (int j = 0; j < max - i - 1; j++)
        {
            printf("    Items compared => : [ %d , %d ]",list[j], list[j + 1]);
            // if next number is smaller than current number swap it 
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;

                swaped = true;
                printf(" => swaped items : [ %d , %d ]\n",list[j], list[j + 1]);
            }else{
                printf(" => not swapped\n");
            }
        }
        if (!swaped)
        {
            break;
        }
        printf("Iteration %d# : \n",(i + 1));
        display();
    }
    
}

void main(){
    printf("Input Array : ");
    display();

    bubbleSort();
    printf("Output Array : ");
    display();
}