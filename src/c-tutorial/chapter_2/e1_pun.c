/*
 * Compiling and Linking
 * .c file extensio is important
 * preprocessing -> compiling -> linking
 */

// C's standard I/O library a.k.a directive
#include <stdio.h>

// main get called automatically when program is executed
// int MAIN(void) and other than 'main' will not be excuted
// main is the function
// int is the return type, in this case is the status code
// void inidicate the main function has no arguement
int main(void)
{
    // statements

    // printf - nicely formated output to the console
    // \n is the new line
    printf("To C, or not to C:that is the question.\n");

    // this program return value of 0 to the OS when its terminated
    // the value is the status code

    printf("Breverity is the soul of wit.\n --Shakespeare\n"); // \n in multiple places
    return 0;
}