#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("A triangle can be formed with the given angles.\n");
    } else {
        printf("A triangle cannot be formed with the given angles.\n");
    }

    return 0;
}
