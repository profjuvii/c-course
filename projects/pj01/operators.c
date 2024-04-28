#include <stdio.h>


int main(){
    int a = 10;     // first value
    int b = 5;      // second value
    
    // arithmetic operators
    int sum = a + b;            // sum of 'a' and 'b'
    int difference = a - b;     // difference between 'a' and 'b'
    int product = a * b;        // product of 'a' and 'b'
    int quotient = a / b;       // quotient of 'a' divided by 'b'
    int remainder = a % b;      // remainder of 'a' divided by 'b'

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n\n", remainder);

    // assignment operator
    int x = a;
    int y = -b;
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    // increment and decrement
    a = x = 2;
    b = y = -2;

    printf("a = %d\n", ++a);    // prefix increment
    printf("x = %d\n", x++);    // postfix increment
    printf("x = %d\n", x);
    printf("b = %d\n", --b);    // prefix decrement
    printf("y = %d\n", y--);    // postfix decrement
    printf("y = %d\n\n", y);

    // comparison operators
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n\n", x <= y);

    // logical operators
    int result1 = (a > 0) && (b < 20);  // logical AND
    int result2 = (a > 0) || (b > 20);  // logical OR
    int result3 = a != b;               // logical NOT

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0;
}
