#include <stdio.h>
#include <cs50.h>
int factorial(int n);

int main(void){
int num=get_int("Num: ");
printf("%d\n",factorial(num));
}

int factorial(int n){
    if (n<=0){
        return 1;
    }

    return factorial(n-1)*n;

}
