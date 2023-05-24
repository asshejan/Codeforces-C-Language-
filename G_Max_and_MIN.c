#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int minimum(int a[], int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}
int maximum(int a[], int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}


int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("%d %d", minimum(a, n), maximum(a, n));
     
    return 0;
}