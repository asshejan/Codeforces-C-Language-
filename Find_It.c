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
    int x;
    scanf("%d", &x);
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]== x){
            count++;
        }
    }
    printf("%d", count);
     
    return 0;
}