// Converts a Farenheit temperature to Celcius

# include <stdio.h>

// define constant

// assigned floating point number with 'f' as prefix
#define FREEZING_PT 32.0f

// define constant using expression also is allowed
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celcius;

    printf("Enter Farenheit temperature: ");

    // scanf also allow %f for input in floating point
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - FREEZING_PT) *SCALE_FACTOR;

    // %.1f tell the program to print float to 1 decimal only
    printf("Celcius equivalent: %.1f", celcius);

    return 0;
}