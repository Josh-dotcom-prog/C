#include <stdio.h>

int main() {
    int math, phy, chem;
    int totalAll, totalMathPhy;

    // Input marks for the three subjects
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);
    
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);
    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);

    // Calculate the total marks
    totalAll = math + phy + chem;
    totalMathPhy = math + phy;

    // Display the total marks
    printf("Total marks of Maths, Physics and Chemistry: %d\n", totalAll);
    printf("Total marks of Maths and Physics: %d\n", totalMathPhy);

    // Check eligibility criteria
    if ((math >= 65 && phy >= 55 && chem >= 50 && totalAll >= 190) || 
        (totalMathPhy >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
