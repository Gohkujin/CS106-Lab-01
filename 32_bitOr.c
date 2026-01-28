#include <stdio.h>

/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   0110 0101 = 0111
 *   1001 1010 = 1000 -> 0111
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y)
{   

    return ~(~x & ~y);
}

int test_bitOr(int x, int y)
{
    return x | y;
}

int main(void)
{
    int x = 0;
    int y = 0;
    printf("expected: %x\n", bitOr(x, y));
    printf("actual  : %x\n", test_bitOr(x, y));
}
