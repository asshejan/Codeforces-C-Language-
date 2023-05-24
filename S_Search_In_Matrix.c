#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int p;
    scanf("%d", &p);
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == p){
                flag = 1;
            }
        }
    }
    if(flag == 1){
        printf("will not take number\n");
    }else{
        printf("will take number\n");
    }
    
     
    return 0;
}