#include <stdio.h>
#include <cs50.h>
int colatze(int n,int tracker);

int main(void){
int num=get_int("Num: ");
printf("%d\n",colatze(num,0));
}


int colatze(int n,int tracker){

    if (n==1){
        return 0;
    }
    if (n%2==0){

        colatze(n/2);
        tracker++;
    }
    if (n%2 !=0){

        colatze((3*n)+1);
        tracker++;
    }
    return tracker;
}
