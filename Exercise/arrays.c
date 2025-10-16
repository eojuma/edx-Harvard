//Create an array of size five with the first element of one(1) and the subsequent elements of double digits

#include <cs50.h>
#include <stdio.h>

int main(void){
    int array[5]={1,2,4,8,16};
    for (int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
