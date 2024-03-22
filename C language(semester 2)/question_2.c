//2. Accept number from user and check is it prime number or not, (using function)
#include <stdio.h>
int isPrime(int num);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

int isPrime(int num) {
    if (num<=1) {
        return 0;
    }
    int i;
    for (i=2;i*i<=num;i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}
