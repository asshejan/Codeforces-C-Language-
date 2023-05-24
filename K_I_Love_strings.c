#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    char a[]
    char a[51], b[51];
    int x[n], y[n];
    for(int i=0;i<n;i++){
         scanf("%s %s", &a[i], &b[i]);
         x[i] = strlen(a[i]);
         y[i] = strlen(b[i]); 
    }
   
    for(int i=0;i<n;i++){     
        for(int j=0;j<=(x[i]+y[i]);i++){
            printf("%c%c", a[j], b[j]);
        }
    }


    return 0;
}