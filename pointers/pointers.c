#include <stdio.h>

int main(void){
    int calls = 4;  //calls holds 4
    int *p=&calls;  //p holds the address of calls  and *p gives you the value stored at that adrees which is 4
    printf("%p\n",&calls);  // or  printf("%p\n",p);
    printf("%d\n",*p);
}
