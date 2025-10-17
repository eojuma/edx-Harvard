#include <stdio.h>
#include <cs50.h>
#include <strings.h>


typedef struct{
	string name;
	string number;
}person;

int main(void){

	person people[3];{
		people[0].name="Evans Juma";
		people[0].number="0720787683";


		people[1].name="TomLee Osbon";
		people[1].number="0700565647";

		people[2].name="Kevin Wesonga";
		people[2].number="0707152873";

	}
	string name=get_string("Employee name: \n");
	int len = strln(name);
	for (int i=0;i<len;i++){
		if (strcmp(name,person.name[1])==0){
			printf("%s and the number is %s \n",name,number);
			return 0;
		}
	}
	printf("Not found\n")
}
