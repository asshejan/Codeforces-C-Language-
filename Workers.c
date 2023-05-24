#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
     
    int res;

    res = (m1*d)/m2;

    printf("%d", res);
     
    return 0;
}