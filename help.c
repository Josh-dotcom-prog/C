#include <stdio.h>

int main(){
    char *str="IncludeHelp";
    printf("%c\n",*&*str);
    return 0;
}