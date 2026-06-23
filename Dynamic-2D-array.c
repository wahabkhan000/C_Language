#include <stdio.h>
#include <stdlib.h>
int main() {
    int row = 0;
    int col = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);

    int **ptr = malloc(row*sizeof(int));
    for (int i=0;i<col;i++) {
        *(ptr+i) = malloc(col*sizeof(int));
    }
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            printf("Enter the [%d][%d] elements of array: ",i,j);
            scanf("%d",(*(ptr+i)+j));
        }
    }

    printf("Array contain elements: \n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }


    free(ptr);
    ptr = NULL;
}
