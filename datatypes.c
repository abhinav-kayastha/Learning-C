#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'c';     // single character %c
    char b[] = "Bro"; // array of characters %s
    float c = 3.141592; // 4 bytes floating point num %f
    double d = 3.141592653589793; // 8 byte float %lf
    bool e = true; // 1 byte %d
    char f = 120; // 1 byte (-128 to 127) %d or %c
    unsigned char g = 255; // 1 byte (0-255) %d or %c
    short int h = 32767; // 2 bytes (-327668-32767) %d
    unsigned short int i = 65535; // 2 bytes (0-65535) %d
    int j = 42069; // decimal number %d

    // make sure to use most memory efficient variable
    // data type
}