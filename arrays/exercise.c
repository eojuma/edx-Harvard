#include <cs50.h>
#include <stdio.h>

int main(void){
    int array[5]={1,2,4,8,16};
    for (int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
        printf("%d%d%d%d%d",array[0],array[1],array[2],array[3],array[4]);
    }
}
