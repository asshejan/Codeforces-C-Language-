#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int t;
    scanf("%d", &t);
    char s[100];
   
    for(int i=0;i<t;i++){
        scanf("%s", &s[i]);
        int len = strlen(s);
        printf("%d\n", len );
    }
    
     
    return 0;
}