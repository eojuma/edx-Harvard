#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks);
int main(){
    int rows = get_int("Number of rows: ");
    // printf("%d",rows);
    for (int j=0;j<=rows;j++){
//   int space=rows-1;
        printbricks(rows-j, " ");
        printbricks(j, "#");
    }

}
void printbricks(int bricks, string chr){
    for (int i=0;i<bricks;i++){

        printf(chr);
    }
    printf("\n");
}
