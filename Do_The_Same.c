#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
     
    return 0;
}