#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]){
    if (argc !=2){
        printf("Provide a valid argument\n");
        return 1;
    }
    string str=argv[1];
    int len=strlen(str);
    for (int i=0;i<len-1;i++){
        if (str[i]>str[i+1]){
            printf("no\n");
            return 0;
        }
    }
    printf("Yes\n");
}
