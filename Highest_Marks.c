#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(int i=0;i<n;i++){
           if(max<a[i]){
               max = a[i];
           }
    }
    for(int i=0;i<n;i++){
        printf("%d ", (max-a[i]));
    }

     
    return 0;
}