// NB:- To run a C program succesfully,every time a change is made to the program then it must be compiled.
#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Hello, world!\n");
    string greeting = get_string("What is your name?: ");
    printf("My name is %s\n", greeting);
    int age = get_int("What is your age %s: ", greeting);
    printf("I am %d years old\n", age);
}
