#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1001];
    scanf("%s", s);
    int flag =0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("NO");
    }else{
        printf("YES");
    }
     
    return 0;
}