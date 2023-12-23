#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
      //first loop is working for the rows 
   for (i = 1; i <= rows; ++i, k = 0) {
      //second loop working for the spaces 
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      //the while loop is for printing the symbol
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}   
