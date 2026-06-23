#include <stdio.h>
#include <stdlib.h>
int main() {
    int row = 0;
    int col = 0;
    int depth = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("Enter the number of depth: ");
    scanf("%d",&depth);

    int ***ptr = malloc(row*sizeof(int**));
    for (int i=0;i<col;i++) {
        *(ptr+i) = malloc(row*sizeof(int*));
        for (int j=0;j<col;j++) {
            *(*(ptr+i)+j) = malloc(depth*sizeof(int));
        }
    }

    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            for (int k=0;k<depth;k++) {
                printf("Enter the [%d][%d][%d] element of array: ",i,j,k);
                scanf("%d",(*(*(ptr+i)+j)+k));
            }
        }
    }

    printf("The elements of array is: \n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            for (int k=0;k<depth;k++) {
                printf("%d ",*(*(*(ptr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            free(ptr[i][j]);
        }
        free(ptr[i]);
    }

    free(ptr);
    ptr = NULL;
}
