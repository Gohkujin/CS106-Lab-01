#include <stdio.h>

/* 
 * thirdBits - return word with every third bit (starting from the LSB) set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int thirdBits(void)
{
    int bytehalf = 0x9;
    int three_bytehalf = bytehalf | ((bytehalf << 2) << 4) | ((bytehalf << 1) << 8);
    int four_byte = (three_bytehalf << 24) | (three_bytehalf << 12) | three_bytehalf;
    return four_byte;
}

int test_thirdBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 3)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", thirdBits());
    printf("actual  : %x\n", test_thirdBits());
}
