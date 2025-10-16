#include <stdio.h>
#include <cs50.h>
int add(int a, int b);
float mult(float a,float b);
int main(void){
printf("%d\n",add(2,5));
printf("%f\n",mult(2.5,5.3));
}

int add(int a,int b){
    return a+b;
}

float mult(float a,float b){
    return a*b;
}
