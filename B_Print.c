#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 void printing(int n){
        for(int i=1;i<=n;i++){
            if(i<n){
               printf("%d ", i);
            }else{
                printf("%d", i);
            }
            
        }
    }

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    printing(n);
     
    return 0;
}