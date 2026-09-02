#include<stdio.h>
#include<string.h>
int main()
{
char string1[12];
int length;
printf("\n Enter any string:");
fgets(string1, sizeof(string1), stdin);
string1[strcspn(string1, "\n")] = '\0';
length=strlen(string1);
printf("\n The length of string=%d",length);
}