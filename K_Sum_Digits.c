#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    char a[n];
    int sum =0;
    scanf("%s", a);
    
    for(int i=0;i<n;i++){
        sum = sum + (a[i] - 48);
        
    }
    printf("%d", sum);
     
    return 0;
}