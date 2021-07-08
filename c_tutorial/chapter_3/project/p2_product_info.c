#include <stdio.h>

int main(void)
{
    float num_of_item, unit_price;
    int m, d, y;

    printf("Enter item number: ");
    scanf("%f", &num_of_item);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter item number: ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%.0f\t\t$%7.2f\t%d/%d/%d", num_of_item, unit_price, m, d, y);

    return 0;

}