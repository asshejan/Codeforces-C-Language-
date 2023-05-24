#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j && i !=((n-1)/2)){
               printf("\\");
           }
           else if(j==(n-i-1) && i !=((n-1)/2)){
               printf("/");
           }
           else if(i ==((n-1)/2) && j ==((n-1)/2)){
               printf("X");
           }
           else{
               printf("*");
           }
       }
        printf("\n");
    }
     
    return 0;
}