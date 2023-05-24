#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int a, b;
    scanf("%d %d", &a, &b);

    if(a == (b+1) || b == (a+1)){
        printf("YES");
    }
    else if(a == b && ((a>0) || (b>0))){
        printf("YES");
    }
    else{
          printf("NO");
    }
    
  
    return 0;
}