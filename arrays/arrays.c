#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
char gender;
int age;
string location;
string number;
string name;
int id;
}PERSON;

int main(void){

    // Simple array creation
    int num[3];
    num[0]=2;
    num[1]=3;
    num[2]=4;
    int sum=0;
    for (int i=0;i<(sizeof(num)/sizeof(num[0]));i++){
        sum+=num[i];
    }
    printf("%i\n",sum);

    PERSON person[3];

    person[0].name="Evans Juma";
    person[0].age=25;
    person[0].location="Mombasa";
    person[0].gender='M';
    person[0].id=37679234;
    person[0].number="+254-768-502-197";



    person[1].name="John Kipkirui";
    person[1].age=34;
    person[1].location="Baringo";
    person[1].gender='M';
    person[1].id=32098764;
    person[1].number="+254-710-592-143";


    person[2].name="Caren Nyangweso";
    person[2].age=29;
    person[2].location="Kilifi";
    person[2].gender='F';
    person[2].id=34034658;
    person[2].number="+254-723-142-908";


    string name=get_string("Employee name: ");
    for (int i=0; i<3;i++ ){
                        if (strcmp(name,person[i].name)==0){
                            printf("Age: %d\n",person[i].age);
                            printf("Gender: %c\n",person[i].gender);
                                printf("Location: %s\n",person[i].location);
                                printf("Contact: %s\n",person[i].number);
                                printf("ID Number%d\n",person[i].id);
                            return 0;
        }
    }
printf("Employee not found\n");
return 1;

}

//The other way to create arrays could be:
// int num[3]={2,3,4};



