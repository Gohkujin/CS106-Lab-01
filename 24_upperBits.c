#include <stdio.h>

/* 
 * upperBits - pads n upper bits with 1's
 *  You may assume 0 <= n <= 32
 *  Example: upperBits(4) = 0xF0000000
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 10
 *  Rating: 1
 */
int upperBits(int n)
{
    int discard = 32 - n;
    int flip_no = (~(0) << discard);
    // this safety masks helps the most if n is a non-zero crazy number - it humbles it to become
    // 1 LES GO
    int safety_mask = !!n << 31;
    return safety_mask & flip_no;  
    // return (((!!n) << 31) >> 31) & ((1 << 31) >> (n + (~0)));
}

int test_upperBits(int x)
{
    int result = 0;
    int i;
    for (i = 0; i < x; i++)
        result |= (1 << (31 - i));
    return result;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", upperBits(x));
    printf("actual  : %x\n", test_upperBits(x));
}
