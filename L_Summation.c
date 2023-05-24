#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
long long int summa(long long int arr[], long long int n){
    if(n==0) return 0;
    else{
        return arr[n-1] + summa(arr, n-1);
    }
}
int main (int argc, char *argv[]) {
     
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }
    printf("%lld", summa(arr,n));
     
    return 0;
}