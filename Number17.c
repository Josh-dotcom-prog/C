#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, Loss;

    
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("You made a profit of: Shs. %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        Loss = costPrice - sellingPrice;
        printf("You incurred a loss of: Shs. %.2f\n", Loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
