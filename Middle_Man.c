#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(n%2!=0){
            int m = n/2;
            printf("%d", arr[m]);
    }else{
            int m1 = (n/2)-1;
            int m2 = (n/2);
            printf("%d %d", arr[m1], arr[m2]);
        }
    
     
    return 0;
}