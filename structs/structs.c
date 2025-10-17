#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct{
	string name;
	string number;
}PERSON;

int main(void){

	PERSON people[3];
		people[0].name="Evans Juma";
		people[0].number="0720787683";


		people[1].name="TomLee Osbon";
		people[1].number="0700565647";

		people[2].name="Kevin Wesonga";
		people[2].number="0707152873";

	string name=get_string("Employee name: \n");
		for (int i=0;i<3;i++){
		if (strcmp(name,people[i].name)==0){
			printf("%s and the number is %s \n",name,people[i].number);
			return 0;
		}
	}
	printf("Not found\n");
}
