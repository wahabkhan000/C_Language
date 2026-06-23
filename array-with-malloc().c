#include <stdio.h>
#include <stdlib.h>
int main() {
    int length = 0;
    printf("Enter the length of array: ");
    scanf("%d",&length);
    int *ptr = malloc(length*sizeof(int));

    printf("\n");
    for (int i=0;i<length;i++) {
        printf("Enter the [%d] element of array: ",i);
        scanf("%d",(ptr+i));
    }

    printf("The elements stored in array is: ");
    for (int i=0;i<length;i++) {
        printf("%d ",*(ptr+i));
    }

    free(ptr);
    ptr = NULL;
    return 0;
}
