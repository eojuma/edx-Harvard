#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]){
    string str=argv[1];
    int len=strlen(str);
    for (int i=0;i<len-1;i++){
        if (str[i]<str[i+1]){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}
