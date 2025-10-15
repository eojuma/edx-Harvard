#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks, string chr);
int main(){
    int rows;
    do{

        rows = get_int("Number of rows: ");
    }
    while(rows<1);
    // printf("%d",rows);
    for (int j=1;j<=rows;j++){
        printbricks(rows-j, " ");
        printbricks(j, "#");
        printf("\n");
    }

}
void printbricks(int bricks, string chr){
    for (int i=0;i<bricks;i++){

        printf("%s",chr);
    }
}
