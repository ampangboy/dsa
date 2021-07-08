#include <stdio.h>
#define TAX_VAL 0.05f

int main(void)
{
    float amount, amount_with_tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount_with_tax = amount + (amount * TAX_VAL);

    printf("With tax added: $%.2f", amount_with_tax);

    return 0;
}
