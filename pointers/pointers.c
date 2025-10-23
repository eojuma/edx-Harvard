#include <stdio.h>

int main(void){
    int calls = 4;
    int *p=&calls;
    printf("%p\n",&calls);
    printf("%d\n",*p);
}
