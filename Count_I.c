#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int cnt1=0, cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);
     
    return 0;
}