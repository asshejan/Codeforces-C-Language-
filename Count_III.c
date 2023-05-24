#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1000];
    scanf("%s", s);
     
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++){
        int value = s[i]-'a';
        cnt[value]++;
    }
    
    for(int i=0;i<26;i++){
        printf("%c - %d\n", i+'a', cnt[i]);
    }


    return 0;
}