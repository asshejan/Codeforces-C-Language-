#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int m, n;
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
              scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
              if(i == (m-1)){
                  printf("%d ", arr[i][j]);
              }
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
              if(j == (n-1)){
                  printf("%d ", arr[i][j]);
              }
        }
    }
     

    return 0;
}