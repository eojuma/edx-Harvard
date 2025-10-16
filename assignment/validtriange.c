#include <stdio.h>
#include <cs50.h>
bool validtriangle(int a,int b,int c);
int main(void){
printf("%i\n",validtriangle(3,4,5));
printf("John");

}
bool validtriangle(int a,int b,int c){
    if ((a+b+c)<1){
        return false;
    }else if ((a+b)>c || (a+c)>b || (c+b)>a){
        return false;
    }
        return true;

}
