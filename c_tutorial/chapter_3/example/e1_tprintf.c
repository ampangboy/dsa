#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.713254534656f;

    
    // %-m.pX

    // conversion specifier d - convert int to string
    // m to add space
    // p to add pading 0
    // - left justified
    printf("| %d | %5d | %-5d | %5.3d |\n", i, i, i, i);

    // conversion specifier f  - convert float to string
    // m to add space
    // p to determined number of decimal places
    // - left justified

    // conversion specifier e  - convert float to string in exponential format
    // m to add space
    // p to determined number of decimal places
    // - left justified

    // conversion specifier g  - convert float to string in either exponential or decimal format
    // m to add space
    // p to determined number of decimal places with no trailing zero
    // - left justified
    printf("| %10.3f | %10.1e | %-10g |\n", x, x, x);

    printf("\n%12.5e", 30.253);

    printf("\n%-6.2g", .0000009979);
    return 0;
}