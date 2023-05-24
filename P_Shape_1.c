#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=(n+1)-i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
     
    return 0;
}