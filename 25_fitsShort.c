#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
{
    // if x can fit into short, the first 16 bits can be discarded as they are signed extensions
    // of the 16th bit
    int shift1 = x << 16;
    int shift2 = shift1 >> 16;
    return !(x ^ shift2);
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 0;
    printf("actual: %x\n", fitsShort(x));
    printf("expected: %x\n", test_fitsShort(x));
}
