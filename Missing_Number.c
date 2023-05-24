#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    
    int s[n], a[n], b[n], c[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d", &s[i], &a[i], &b[i], &c[i]);
    }
    int sum[n], res[n];
    for(int i=0;i<n;i++){
        sum[i] = a[i]+b[i]+c[i];
        res[i] = s[i] - sum[i];
        printf("%d\n", res[i]);
    }
    
     
    return 0;
}