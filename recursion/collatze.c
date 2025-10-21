#include <stdio.h>
#include <cs50.h>
int colatze(int n);

int main(void){
int num=get_int("Num: ");
printf("%d\n",colatze(num));
}


int colatze(int n){

    if (n==1){
        return 0;
    }
    if (n%2==0){
        return colatze(n/2);
    }
    if (n%2 !=0){
        return colatze((3*n)+1);
    }
}
