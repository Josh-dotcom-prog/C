#include <stdio.h>
#include <string.h>
int main(){
    char str1[ ] = "ROM";
    char str2[ ] = "RAM";
    int result;
    result = strcmp(str1,str2);
    printf("The result of comparison is: %d", result);
}