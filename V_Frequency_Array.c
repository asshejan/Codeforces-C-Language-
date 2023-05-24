#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d", &arr[i]);
         printf("%d ", arr[i]);
    }
    int cnt[5]={0};
    for(int i=0;i<n;i++){
        cnt[arr[i]]++;
    }
    for(int i=0;i<m;i++){
        printf("%d\n", cnt[i]);
    }
    return 0;
}