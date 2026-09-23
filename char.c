#include <stdio.h>  // Include the standard input/output library for printf

int main() {  // Start of the main function
    char ch = 10;  // Declare a character variable ch and initialize it to 10
    void *ptr = &ch;  // Create a generic pointer ptr that stores the address of ch
    printf("%d,%d", *(char*)ptr, ++(*(char*)ptr));  // Cast ptr to char* and print the current value of ch, then increment it and print the new value
    return 0;  // End the program successfully
}  // End of the main function