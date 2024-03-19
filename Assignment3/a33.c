#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int palindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int armstrong(int n) {
    int original = n;
    int num_digits = 0;
    int sum = 0;

    while (n != 0) {
        num_digits++;
        n /= 10;
    }

    n = original;
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return original == sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits: %d\n", sum_of_digits(number));

    printf("Reversed number: %d\n", reverse(number));

    
    if (palindrome(number)) {
        printf("%d is a numeric palindrome\n", number);
    } else {
        printf("%d is not a numeric palindrome\n", number);
    }

  
    if (armstrong(number)) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}

