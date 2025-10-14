#include <stdio.h>
#include <cs50.h>
void printrows(int bricks);
int main(){
	int rows = get_int("how long do you want our pyramid to be?\n");
	// printf("%i\n",rows);
	for (int i=0;i<rows;i++){

		printrows(rows);
	}
}

void printrows( int bricks){
	for (int i=0;i<bricks;i++){

		printf("#");
	}
	printf("\n");
}
