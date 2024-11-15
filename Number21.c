#include <stdio.h>

int main() 
{
    int Num;

    printf("Enter Number [1-9]: ");
    scanf("%d", &Num);

    if(Num == 1){
        printf("One");
    } else if(Num == 2) {
        printf("Two");
    } else if (Num == 3) {
        printf("Three");
    } else if (Num == 4) {
        printf("Four");
    } else if (Num == 5) {
        printf("Five");
    } else if (Num == 6) {
        printf("Six");
    } else if (Num == 7) {
        printf("Seven");
    } else if (Num == 8) {
        printf("Eight");
    } else if (Num == 9) {
        printf("Nine");
    } else {
        printf("Invalid input!");
    }

    return 0;
}