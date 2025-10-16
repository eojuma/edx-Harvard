#include <stdio.h>
int main(void){

    // Simple array creation
    int num[3];
    num[0]=2;
    num[1]=3;
    num[2]=4;
    int sum=0;
    for (int i=0;i<(sizeof(num)/sizeof(num[0]));i++){
        sum+=num[i];
    }
    printf("%i\n",sum);
}

//The other way to create arrays could be:
// int num[3]={2,3,4};

