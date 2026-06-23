#include <stdio.h>

int main() {
   int row = 0;
   int col = 0;
   printf("Enter the number of rows of 2D array: ");
   scanf("%d",&row);
   printf("Enter the number of column of 2D array: ");
   scanf("%d",&col);

   int arr[row][col];

   for (int i=0;i<row;i++) {
      for (int j=0;j<col;j++) {
         printf("Enter the number of element of %d row %d column: ",i,j);
         scanf("%d",&arr[i][j]);
      }
   }

   for (int i=0;i<row;i++) {
      for (int j=0;j<col;j++) {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
}
