#include <stdio.h>

int main(void)
{
    int gsi, g_identifier, pub_code, item_num, check_dig;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &g_identifier, &pub_code, &item_num, &check_dig);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", g_identifier);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d", check_dig);

    return 0;
}