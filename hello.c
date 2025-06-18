#include <stdio.h>

/*
 * char, int
*/

int main(void)
{
    // int some_value; // some garbage value
    // printf("Value: %d\n", some_value);

    // printf("Hello world\n");

    char value = 0; // one byte
    printf("Value: %d\n", value);
    unsigned long size = sizeof(value);
    printf("Size of char: %lu\n", size);

    /*
        1 byte = 8 bits
        Max: 2^7 - 1 Min: -2^7, max value is one smaller because it accounts for 0
    */

   value = 127; // if 128, hello.c:22:12: warning: implicit conversion from 'int' to 'char' changes value from 128 to -128 [-Wconstant-conversion]
   printf("Value: %d\n", value);

   value = -128;
   printf("Value: %d\n", value);

    return 0;
}