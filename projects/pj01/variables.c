#include <stdio.h>      // printf() - output to the console
#include <stdbool.h>    // boolean variable


int main(){
    // type name = value;
    int num = 10;               // integer (whole number)           2 bytes (16-bit system) or 4 bytes (32-bit or 64-bit system)
    float f_num = 23.2;         // floating point number            4 bytes
    double lf_num = 100.1;      // large floating point number      8 bytes
    char letter = 'A';          // character                        1 byte
    bool valid = true;          // boolean                          1 byte

    // output variables
    printf("%d\n", num);                            // %d or %i         decimal or integer format
    printf("%f\n", f_num);                          // %f or %F         floating-point format
    printf("%lf\n", lf_num);                        // %lf              double precision floating-point format
    printf("%c\n", letter);                         // %c               сharacter format
    printf("%d\n", valid);                          // %d or %i         decimal or integer format

    // output the ASCII value in other formats
    printf("Decimal format: %d\n", (int)letter);    // %d or %i         decimal or integer format
    printf("Hexadecimal format: %x\n", letter);     // %x               hexadecimal format
    printf("Octal format: %o\n", letter);           // %o               octal format

    return 0;
}
