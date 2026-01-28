#include <stdio.h>

/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *  0100 0101 = 0001
 *  flip and 1011 1010 = 1010 =  then flip it = 0101
 *           normal and = 0100 then flip it > 1011
 * 1111 0000 = 0000
 * 1100 0011 = 0000 = 1111
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */

 /// MEANINIG OF EXCLUSIVE OR is 'or' but not 'both'
// (x|y) & ~(x&y)
int bitXor(int x, int y)
{   
    int mask1_xORy = ~(~x & ~y);
    int mask2 = ~(x&y);
    return mask1_xORy & mask2;
}

int test_bitXor(int x, int y)
{
    return x ^ y;
}

int main(void)
{
    int x = 0;
    int y = 0;
    printf("expected: %x\n", bitXor(x, y));
    printf("actual  : %x\n", test_bitXor(x, y));
}
