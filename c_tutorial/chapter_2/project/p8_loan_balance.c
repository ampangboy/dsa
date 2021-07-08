#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment;
    float monthly_interest_rate;
    float first_payment, second_payment, third_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate / 100.0f / 12.0f;

    first_payment = loan - monthly_payment + (loan * monthly_interest_rate);
    second_payment = first_payment - monthly_payment + (first_payment * monthly_interest_rate);
    third_payment = second_payment - monthly_payment + (second_payment * monthly_interest_rate);

    printf("Balance remaining after first payment : $%.2f\n", first_payment);
    printf("Balance remaining after second payment : $%.2f\n", second_payment);
    printf("Balance remaining after third payment : $%.2f\n", third_payment);

    return 0;
}