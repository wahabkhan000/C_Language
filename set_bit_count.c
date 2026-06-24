#include <stdio.h>

int main() {
    unsigned int temp = 0;
    unsigned int value = 0;
    printf("Enter the value of number: ");
    scanf("%u",&value);
    temp = value;
    int bit_count=0;
    while (temp>0) {
        if (temp & 1) {
            bit_count++;
        }
        temp >>= 1;
    }
    printf("The number of set bit in %u is: %d",value,bit_count);
}
