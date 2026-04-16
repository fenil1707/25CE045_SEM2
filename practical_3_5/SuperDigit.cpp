#include "SuperDigit.h"

int superDigit(long long n) {
    if (n < 10)
        return n;

    long long sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return superDigit(sum);
}

