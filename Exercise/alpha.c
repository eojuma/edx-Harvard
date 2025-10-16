// Write a program to check if the charaters of a word given by the user are in alphabetical order and print out ye otherwise no
#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
string str=get_string("Word: ");
for (int i=0;i<strlen(str);i++){
    if (str[i]>str[i+1]){
        printf("no\n");
        return 0;
    }
    printf("Yes\n");
}
}
