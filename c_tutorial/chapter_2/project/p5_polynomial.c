#include <stdio.h>

int main(void)
{
    int x, coef_5, coef_4, coef_3, coef_2, coef_1, coef_0, y;
    
    printf("Enter x :");
    scanf("%d", &x);

    coef_5 = 3 * x * x * x * x * x;
    coef_4 = 2 * x * x * x * x;
    coef_3 = -5 * x * x * x;
    coef_2 = -x * x;
    coef_1 = 7 * x;
    coef_0 = -6;

    y = coef_0 + coef_1 + coef_2 + coef_3 + coef_4 + coef_5;

    printf("y is %d", y);

    return 0;
}