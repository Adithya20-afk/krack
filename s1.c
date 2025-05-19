#include <stdio.h>
//adding a function
int function()
{
	printf("function added by Adithya20-afk");
}
int main() {
    int n, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    function();

    return 0;
}

