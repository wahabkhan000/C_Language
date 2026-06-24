#include <stdio.h>

unsigned int bit_reverse(unsigned int integer,int bit_position) {
    integer |= (1<<(31-bit_position));
    return integer;
}

int main() {
    unsigned int temp = 0;
    unsigned int value = 0;
    printf("Enter the value of number: ");
    scanf("%u",&value);
    temp = value;
    unsigned int reverse_bit = 0;
    int bit_position=0;
    while (temp>0) {
        if (temp & 1) {
            reverse_bit = bit_reverse(reverse_bit,bit_position);
        }
        bit_position++;
        temp >>= 1;
    }
    printf("The final answer is: %u",reverse_bit);
}
