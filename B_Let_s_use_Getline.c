#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]){
     
    char s[1000001];
    fgets(s, 1000001, stdin);

    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    
     
    return 0;
}