#include <stdio.h>
#include <cs50.h>

int fibo(int num);
int main(void){
int num=get_int("NUmber: ");
printf("%d\n",fibo(num));
}

int fibo(int n){
if (n==0){
    return 0;
}

if (n==1){
    return 1;
}

    return fibo(n-1)+fibo(n-2);

}

