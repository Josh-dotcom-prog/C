#include<stdio.h>
#include<string.h>
int main()
{
char string1[30],string2[15];
printf("\n Enter first string:");
fgets(string1, sizeof string1, stdin);
printf("\n Enter second string:");
fgets(string2, sizeof string2, stdin);
strcat(string1,string2);
printf("\n Concatenated string=%s",string1);
}