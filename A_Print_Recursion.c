#include <stdio.h>

void printLoveRecursion(int n);

int main() {
    int n;
   
    scanf("%d", &n);
    
    printLoveRecursion(n);
    return 0;
}

void printLoveRecursion(int n) {
    if (n > 0) {
        printf("I love Recursion\n");
        printLoveRecursion(n-1);
    }
}
