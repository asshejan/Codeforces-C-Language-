#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char a[11], b[11];
    scanf("%s %s", a, b);

    int x = strlen(a);
    int y = strlen(b);
    printf("%d %d\n", x, y);
    char c[100];
    for(int i=0;i<=x;i++){
        c[i]= a[i];
    }
    for(int i=0;i<=y;i++){
        c[x]= b[i];
        x++;
    }
    printf("%s\n", c);
     int tmp = a[0];
     a[0] = b[0];
     b[0] = tmp;

    printf("%s %s", a, b);
    return 0;
}