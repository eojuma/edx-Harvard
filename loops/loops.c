#include <stdio.h>
#include <cs50.h>
void printbricks(int bricks);
int main(){

	int rows;
	do{

		 rows = get_int("How many rows should the pyramid have?: ");
		// printf("%i\n",rows);
	}
	while(rows<1);
	for (int j=0;j<rows;j++){

		printbricks(j+1);
	}
}
void printbricks(int bricks){
	for (int i = 0 ;i<bricks;i++){

		printf("#");
	}
	printf("\n");
}
