#include <stdio.h>

int is_bit_set(unsigned int integer,const int bit_position) {
    return (integer & (1<<bit_position)) != 0;

}

int main() {
    unsigned int temp = 0;
    unsigned int value = 0;
    int bit_position = 0;
    printf("Enter the value of number: ");
    scanf("%u",&value);
    printf("Enter the position of bit: ");
    scanf("%d",&bit_position);
    temp = value;
    while (bit_position<0 || bit_position>31) {
        printf("You entered incorrect bit position!\n");
        printf("Enter the position of bit: ");
        scanf("%d",&bit_position);
    }
    if (is_bit_set(temp,bit_position)) {
        printf("The bit %d of %d is set.",bit_position,temp);
    }
    else {
        printf("The %d bit of %d is not set.",bit_position,temp);
    }

}
