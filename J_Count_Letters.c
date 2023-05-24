#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
    char ch;
    int cnt[26]={0};
    while(scanf("%c", &ch) != EOF ){
        int value = ch-'a';
        cnt[value]++;
    }
   
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
          printf("%c : %d\n", i+'a', cnt[i]);
        }     
    }


    return 0;
}