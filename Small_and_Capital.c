#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1000];
    scanf("%s", s);
    int cnt1=0, cnt2=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i] >= 65 && s[i] <= 90){
            cnt1++;
        }
        if(s[i] >= 97 && s[i] <= 122){
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);
     
    return 0;
}