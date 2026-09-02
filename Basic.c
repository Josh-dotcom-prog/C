// #include <stdio.h>

// int main () {
//     /* my first program in C */
// printf("Hello, World! \n");
// return 0;
// }
#include<stdio.h>
#include<string.h>
main()
{
char string1[50];
int length;
printf("\n Enter any string:");
gets(string1);
length=strlen(string1);
printf("\n The length of string=%d",length);
}