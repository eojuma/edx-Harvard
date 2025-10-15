#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks);
int main(){
    int rows = get_int("Number of rows: ");
    // printf("%d",rows);
    for (int j=rows;j>0;j--){

        printbricks(j);
    }

}
void printbricks(int bricks){
    for (int i=0;i<bricks;i++){

        printf("#");
    }
    printf("\n");
}
