#include <cmath>  // For using sqrt function

// Function to check if a number A is a prime number
int Solution::isPrime(int A) {
    bool isPrime = true;  // Assume A is prime unless proven otherwise

    // 0 and 1 are not prime numbers
    if (A == 0 || A == 1) {
        return 0;
    }

    // Loop from 2 to square root of A
    // If A is divisible by any number in this range, it is not prime
    for (int i = 2; i <= sqrt(A); i++) {
        if (A % i == 0) {  // If A is divisible by i
            isPrime = false;  // Set flag to false
            break;  // No need to check further
        }
    }

    // Return 1 if prime, otherwise return 0
    if (isPrime) {
        return 1;
    } else {
        return 0;
    }
}
