// Create a right aligned pyramid whose number of rows is to be determined by the user.
#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks, char chr);
int main(){
    int rows;
    do{

        rows = get_int("Number of rows: ");
    }
    while(rows<1);
    // printf("%d",rows);
    for (int j=0;j<rows;j++){
        printbricks(rows-j, ' ');
        printbricks(j+1, '#');
        printf("\n");
    }

}
void printbricks(int bricks, char chr){
    for (int i=0;i<bricks;i++){

        printf("%c",chr);
    }
}
