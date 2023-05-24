#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==((n/2)+1)){
                printf("#");
            }else if(j==((n/2)+1)){
                printf("#");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
     
    return 0;
}