#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void printOne(int n){
     
     if(n>0){
         printOne(n-1);
         printf("%d\n", n);
         
     }
}
int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    printOne(n);
     
    return 0;
}