#include <stdio.h>

int main() {
    char special;

    printf("Enter a character: ");
    scanf("%c", &special);

    if ((special >= 'a' && special <= 'z') || (special >= 'A' && special <= 'Z')) {
        printf("%c is an alphabet.\n", special);
    } else if (special >= '0' && special <= '9') {
        printf("%c is a digit.\n", special);
    } else {
        printf("%c is a special character.\n", special);
    }

    return 0;
}
