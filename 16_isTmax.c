#include <stdio.h>

/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x)
{
    return !(~x + ~x) & !!(x + 1);

    // int nx = ~x;
    // int nxnz = !!nx;
    // int nxovf = !(nx + nx);
    // return nxnz & nxovf;
}

int test_isTmax(int x)
{
    return x == 0x7FFFFFFF;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", isTmax(x));
    printf("actual  : %x\n", test_isTmax(x));
}
