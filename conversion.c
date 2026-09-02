#include<stdio.h>
void main( )
{
char str[ ] = " RAMU 985 98.5";
char name[10];
int tot_marks;
float avg;
sscanf(str, "%s%d%f", name, &tot_marks, &avg);
printf("Name=%s\n", name);
printf("Total marks=%d\n", tot_marks);
printf("Average=avr%f\n", avg);
getchar();
}