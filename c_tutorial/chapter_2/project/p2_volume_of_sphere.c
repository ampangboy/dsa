#include <stdio.h>
#define FOUR_OVER_THREE_PI (4.0f / 3.0f * 3.142f)

int main(void)
{
    float r = 10.0f, v;
    v = FOUR_OVER_THREE_PI * r * r * r;

    printf("Volume of sphere for r=%.1f is %.3f", r, v);
    return 0;
}