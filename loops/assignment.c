#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks);
int main(){
    int rows = get_int("Number of rows: ");
    // printf("%d",rows);
    for (int j=0;j<rows;j++){

        printbricks(j);
    }

}
void printbricks(int bricks){
    for (int i=bricks;i>0;i--){

        printf("#");
    }
    printf("\n");
}
