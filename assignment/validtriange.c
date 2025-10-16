#include <stdio.h>
bool validtriangle(int a,int b,int c);
int main(void){
printf("%i\n",validtriangle(2,4,1))

}
bool validtriangle(int a,int b,int c){
    if (a+b+c)<1{
        return false;
    }else if ((a+b)>c || (a+c)>b || (c+b)>a){
        return false;
    }else{
        return true
    }

}
