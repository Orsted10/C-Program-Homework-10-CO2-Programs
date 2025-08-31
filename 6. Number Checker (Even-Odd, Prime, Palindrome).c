#include <stdio.h>

int main() {
    int num, temp, digit, reversed = 0, i, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }
    
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }
    
    if (num == reversed) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    
    return 0;
}
