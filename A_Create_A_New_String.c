#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    
    int count1=0, count2=0;
    for(int i=0;s[i]!= '\0';i++){
        count1++;
    }
    for(int i=0;t[i]!= '\0';i++){
        count2++;
    }
    printf("%d %d\n", count1, count2);
    printf("%s %s", s, t);
     
    return 0;
}