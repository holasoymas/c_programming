#include <stdio.h>
#include <stdbool.h>
#define MAX 10

int list[MAX] = {1, 8, 4, 6, 0, 3, 5, 7, 2, 9};

void display(){
    printf("[\n");
    //? Navigate through all the items
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ",list[i]);
    }
    printf("]\n");
}

void bubbleSort(){
    int temp;
    bool swapped = false;
    //? Loop through all the numbers 
    for (int i = 0; i < MAX - 1; i++)
    {
        swapped = false;
        //? Loop through all the items falling ahead
        for (int j = 0; j < MAX - i - 1; j++)
        {
            printf("    Itmes compared : [ %d , %d ] ", list[j],list[j + 1]);
            //todo If next no. is less than current no. swap it
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;

                swapped = true;
                printf(" => swapped [ %d , %d ]\n",list[j], list[j + 1]);
            }else{
                printf(" => not swapped\n");
            }
        }
        //* If no number was sorted that means array is sorted so break throught the loop
        if (!swapped)
        {
            break;
        }
        printf("Iteration %d#: ",(i + 1));
        display();
    }
     
}

void main(){
    printf("Input Array : ");
    display();
    printf("\n");

    bubbleSort();
    printf("Output Array : ");
    display();
}