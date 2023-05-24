#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[100001];
    scanf("%s", s);
    
    int len = strlen(s);
    for(int i=0;i <= len;i++){
        if(s[i] == ','){
            printf(" ");
        }
        else if(s[i] >= 97 && s[i] <= 122){
            printf("%c", s[i] - 32);
        }else if(s[i] >= 65 && s[i] <= 90){
            printf("%c", s[i] + 32);
        }
  
    }
    
     
    return 0;
}