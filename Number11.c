#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int marks_physics;
    int marks_chemistry;
    int marks_computer;
    int total_marks;
    float percentage;
    char division[10];
};

void calculateResults(struct Student *student) {
    student->total_marks = student->marks_physics + student->marks_chemistry + student->marks_computer;
    student->percentage = (student->total_marks / 3.0);
    
    if (student->percentage >= 602) {
        strcpy(student->division, "First");
    } else if (student->percentage >= 50) {
        strcpy(student->division, "Second");
    } else if (student->percentage >= 40) {
        strcpy(student->division, "Third");
    } else {
        strcpy(student->division, "Fail");
    }
}

int main() {
    struct Student student;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &student.roll_no);

    printf("Input the Name of the Student: ");
    scanf("%s", student.name);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &student.marks_physics, &student.marks_chemistry, &student.marks_computer);

    calculateResults(&student);

    printf("\nRoll No : %d\n", student.roll_no);
    printf("Name of Student : %s\n", student.name);
    printf("Marks in Physics : %d\n", student.marks_physics);
    printf("Marks in Chemistry : %d\n", student.marks_chemistry);
    printf("Marks in Computer Application : %d\n", student.marks_computer);
    printf("Total Marks = %d\n", student.total_marks);
    printf("Percentage = %.2f\n", student.percentage);
    printf("Division = %s\n", student.division);

    return 0;
}
