#include <stdio.h>
#include <stdbool.h>


// function to check if a number is prime
bool is_prime(const int num){
    if(num <= 3)
        return num > 1;
    else if(num % 2 == 0 || num % 3 == 0)
        return false;
    for(int i = 5; i * i <= num; i += 6)
        if(num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}


// function to calculate factorial
int factorial(const int n){
    if(n <= 1)
        return n >= 0;
    return n * factorial(n - 1);
}


// function to print Fibonacci sequence
void print_fibonacci_sequence(const int length){
    if(length <= 0){
        printf("Error: Wrong length.\n");
        return;
    } else if(length == 1){
        printf("0\n");
        return;
    }
    int num = 0, res = 1;
    printf("0 1 ");
    for(int i = 2; i < length; ++i){
        int temp = res;
        res += num;
        num = temp;
        printf("%d ", res);
    }
    printf("\n");
    return;
}


// main function
int main(int argc, char* argv[]){
    // printing prime numbers from 0 to 15
    for(int i = 0; i < 15; ++i)
        if(is_prime(i))
            printf("%d ", i);
    printf("\n");

    // calculating factorial and printing the result
    int num = 8;
    printf("%d! = %d\n", num, factorial(num));

    // printing Fibonacci sequence of length 10
    print_fibonacci_sequence(10);

    return 0;
}
