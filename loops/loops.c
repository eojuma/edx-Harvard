#include <stdio.h>
#include <cs50.h>
void printrows(int bricks);
int main(){
	int rows = get_int("how long do you want our pyramid to be?\n");
	// printf("%i\n",rows);
	printrows(rows);
}

void printrows( int bricks){
	printf("#\n");
}
