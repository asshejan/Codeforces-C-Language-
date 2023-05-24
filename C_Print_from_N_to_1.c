#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void printOne(int n){
     
     if(n>1){  
         printf("%d ", n);
         printOne(n-1);     
     }else if(n==1){
         printf("1");
     }
}
int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    printOne(n);
     
    return 0;
} 