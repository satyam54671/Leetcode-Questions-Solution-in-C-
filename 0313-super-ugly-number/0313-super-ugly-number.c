#include <limits.h>

int nthSuperUglyNumber(int n, int* primes, int primesSize)
{
    int ugly[n];
    int idx[primesSize];
    long long next[primesSize];   // 🔴 changed to long long

    ugly[0] = 1;

    for (int i = 0; i < primesSize; i++)
    {
        idx[i] = 0;
        next[i] = primes[i];      // safe
    }

    for (int i = 1; i < n; i++)
    {
        long long min = LLONG_MAX;

        // find minimum
        for (int j = 0; j < primesSize; j++)
        {
            if (next[j] < min)
                min = next[j];
        }

        ugly[i] = (int)min;   // cast back to int (safe per problem)

        // update all matching primes
        for (int j = 0; j < primesSize; j++)
        {
            if (next[j] == min)
            {
                idx[j]++;
                next[j] = (long long)primes[j] * ugly[idx[j]];
            }
        }
    }

    return ugly[n - 1];
}
