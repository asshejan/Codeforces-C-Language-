#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void evenIndex(int a[], int n){
      
       if(n>=0){ 
           evenIndex(a,n-1);
          printf("%d ", a[n]);      
       }       
}

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }  
    evenIndex(arr,n);   
    return 0;
}