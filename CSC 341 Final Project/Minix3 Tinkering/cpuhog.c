// cc cpuhog.c -o cpuhog
// ./cpuhog
// # In another terminal: ps  (watch TIME grow)
#include <stdio.h>

int main()
{
    volatile unsigned long long x = 0;

    while (1)
    {
        x++;
        if (x % 100000000ULL == 0)
        {
            printf("still working: %llu\n", x);
        }
    }

    return 0; /* Never reached */
}
