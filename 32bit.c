#include <stdio.h>

int main() {
    void *ptr = 2000;
    ++ptr;
    printf("%u",ptr);
    return 0;
}