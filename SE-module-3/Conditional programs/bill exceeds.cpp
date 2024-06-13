#include <stdio.h>
int main() 
{
    int customerID, units;
    char name[50];
    float chargePerUnit, totalAmount, surcharge = 0;
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 350) {
        chargePerUnit = 1.20;
    } 
	else if (units < 600) 
	{
        chargePerUnit = 1.50;
    } 
	else if (units < 800) 
	{
        chargePerUnit = 1.80;
    } 
	else
	 {
        chargePerUnit = 2.00;
    }

    totalAmount = units * chargePerUnit;

    if (totalAmount > 800) {
        surcharge = totalAmount * 0.18;
        if ((totalAmount + surcharge) < 256) {
            surcharge = 256 - totalAmount;
        }
    }

    totalAmount += surcharge;
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: Rs%.2f\n", chargePerUnit);
    printf("Surcharge: Rs%.2f\n", surcharge);
    printf("Total Amount: Rs%.2f\n", totalAmount);

    return 0;
}

