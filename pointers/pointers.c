#include <stdio.h>

int main(void){
    int calls = 4;  //calls holds 4
    int *p=&calls;  //p holds the address of calls  and *p gives you the value stored at that adrees which is 4
    printf("%p\n",&calls);  // or  printf("%p\n",p);
    printf("%d\n",*p);

     *p=2;  // This changes the value of calls from 4 to 2
    printf("%d\n",*p);
    printf("%d\n",calls);
}
