#include<stdio.h>
#define MAX 10

int array[MAX] = {5,6,8,7,1,2,0,3,4,9};

int printLine(int count){
    for (int i = 0; i < count; i++)
    {
        printf("=");
    }
    printf("\n");
    return 0;
}

void display(){
    printf("[");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ",array[i]);
    }
    printf(" ]\n");
}

void selectionSort(){
    int minIndex;
    for (int i = 0; i < MAX - 1; i++)
    {
        // set the current element as minimum 
        minIndex = i;
        // check if the element is minimum or not
        for (int j = i + 1; j < MAX; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            printf("Items swapped : [ %d , %d ] \n", array[i],array[minIndex]);
            // swaps the numbes 
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
        printf("Iteration %d# : ",(i + 1));
        display();
    }
}

void main(){
    printf("Inuut array : ");
    display();
    printLine(50);

    selectionSort();
    printf("Output Array : ");
    display();
    printLine(50);
}