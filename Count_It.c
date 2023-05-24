#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1001];
    fgets(s, 1001, stdin);

    int c1=0, c2=0, c3=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i] >= 65 && s[i] <= 90){
              c1++;
        }
        if(s[i] >= 97 && s[i] <= 122){
              c2++;
        }
        if(s[i] == 32 ){
              c3++;
        }
    }
     
    printf("Capital - %d\n", c1);
    printf("Small - %d\n", c2);
    printf("Spaces - %d\n", c3);
    return 0;
}