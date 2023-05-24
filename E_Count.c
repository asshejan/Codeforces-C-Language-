#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1000001];
    scanf("%s", s);
 
    int i=0, sum=0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        
        sum=sum+(s[i]-'0');
    }
    printf("%d", sum);
     
    return 0;
}