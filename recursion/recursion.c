#include <stdio.h>
#include <cs50.h>
void pyramid(int bricks);


int main(void){
    int rows=get_int("Heihgt of the pyramid: ");
    pyramid(rows);

}

void pyramid(int bricks){
    if (bricks==0){
        return;
    }

    pyramid(bricks-1);
    for (int i=0;i<bricks;i++){
        printf("#");
    }
    printf("\n");
}
