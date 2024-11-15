#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == angle2 && angle2 == angle3) {
            printf("The triangle is Equilateral.\n");
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given angles do not form a triangle.\n");
    }

    return 0;
}
