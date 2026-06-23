#include <stdio.h>
#include <stdlib.h>
int main() {
    int length = 0;
    printf("Enter the length of array: ");
    scanf("%d",&length);
    int *ptr = malloc(length*sizeof(int));

    for (int i=0;i<length;i++) {
        printf("Enter the [%d] element of array: ",i);
        scanf("%d",(ptr+i));
    }

    int flag = 0;
    printf("If you want to allocate more memory enter except then 0 else enter 0: ");
    scanf("%d",&flag);
    while (flag != 0) {
        int more_value = 0;
        printf("Enter the amount of extra memory: ");
        scanf("%d",&more_value);
        int *temp = realloc(ptr,(length+more_value)*sizeof(int));
        if (temp != NULL) {
            ptr  = temp;
            for (int i=length;i<length+more_value;i++) {
                printf("Enter the [%d] element of array: ",i);
                scanf("%d",(ptr+i));
            }
            length += more_value;
        }
        printf("If you want to allocate mre memory enter except then 0 else enter 0: ");
        scanf("%d",&flag);
    }
    printf("The elements stored in array is: ");
    for(int i = 0; i < length; i++){
        printf("%d ", *(ptr+i));
    }

    free(ptr);
    ptr = NULL;
    return 0;
}
