#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c && c==a && a!=0){
        printf("Yes");
    }else{
        printf("No");
    }
     
    return 0;
}