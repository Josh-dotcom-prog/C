#include <stdio.h>  // Include the standard input/output library for printf

int main(){  // Start of the main function where program execution begins
    char *str="IncludeHelp";  // Declare a pointer to a string literal and store the text "IncludeHelp"
    printf("%c\n",*&*str);  // Print the first character of the string using pointer dereferencing: *str -> 'I', &*str -> address of 'I', %c prints the character
    return 0;  // End the program successfully and return status code 0
}  // End of the main function