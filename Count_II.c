#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1000];
    scanf("%s", s); 
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            count++;
        }
    }
    printf("%d", count);
     
    return 0;
}