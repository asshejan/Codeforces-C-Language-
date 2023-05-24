#include<stdio.h>

int main() {
   int i, space, rows, k = 0;
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      while (k != 2 * i - 1) {
         printf("*");
         ++k;
      }
      printf("\n");
   }
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space){
            printf(" ");
      }
        
      for (int j = i; j <= 2 * i - 1; ++j){
         printf("*");
      }
      for (int j = 0; j < i - 1; ++j){
         printf("*");
      }
         
      printf("\n");
   }
   return 0;
}