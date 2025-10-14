#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks);
int main(){
	int rows = get_int("How many rows should the pyramid have?: \n");
	// printf("%i\n",rows);
	for (int j=0;j<rows;j++){

		printbricks(rows);
	}
}
void printbricks(int bricks){
	for (int i = 0 ;i<bricks;i++){

		printf("#");
	}
}
