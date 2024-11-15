#include <stdio.h>
#include <string.h>

struct Customer {
    int id;
    char name[50];
    int units;
    float bill;
};

void calculateBill(struct Customer *cust) {
    float charge;

    if (cust->units <= 199) {
        charge = cust->units * 1.20;
    } else if (cust->units >= 200 && cust->units < 400) {
        charge = cust->units * 1.50;
    } else if (cust->units >= 400 && cust->units < 600) {
        charge = cust->units * 1.80;
    } else {
        charge = cust->units * 2.00;
    }

    if (charge > 400) {
        charge += charge * 0.15;
    }

    if (charge < 100) {
        charge = 100;
    }

    cust->bill = charge;
}

int main() {
    struct Customer cust;

    printf("Enter customer ID: ");
    scanf("%d", &cust.id);

    printf("Enter customer name: ");
    scanf("%s", cust.name);

    printf("Enter units consumed: ");
    scanf("%d", &cust.units);

    calculateBill(&cust);

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", cust.id);
    printf("Customer Name: %s\n", cust.name);
    printf("Units Consumed: %d\n", cust.units);
    printf("Total Amount to be Paid: Shs. %.2f\n", cust.bill);

    return 0;
}
