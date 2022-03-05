#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompts the user to input a string
    string name = get_string("What's your name? ");

    //Prints "Hello", followed by the user input string
    printf("Hello, %s\n", name);
}