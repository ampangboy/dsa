#include <stdio.h>

int main(void)
{
    int part_1, part_2, part_3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &part_1, &part_2, &part_3);
    
    printf("You entered %d.%d.%d", part_1, part_2, part_3);

    return 0;
}