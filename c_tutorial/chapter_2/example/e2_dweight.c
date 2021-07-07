#include <stdio.h>

int main(void)
{
    // declare variable types
    // this is uninitialize value
    int height, length, width, volume, weight;

    // int height = 8, length = 12, width = 10; <-- this is allowed
    // int height, length, width = 10; <-- only assigned 10 to width

    printf("%d\n", height); // this will results in unpredicted value
                            // since the variable is uninitialized

    // assigning value to the variable
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // %d works only for int data type. 
    printf("Dimentions: %dx%dx%d\n", length, width, height);
    
    printf("Volume (cubic inches): %d\n", volume);
    // similarly can be done using
    printf("Volume (cubic inches): %d\n", length * width * height );

    printf("Dimensional weight (pounds) %d\n", weight);

    return 0;
}