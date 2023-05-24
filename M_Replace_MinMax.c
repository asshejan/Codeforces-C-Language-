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
    int max = arr[0], p = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            p=i;
        }
    }
     int min = arr[0], q=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            q=i;
        }
    }
    int arr2[n];
    
    for(int i=0;i<n;i++){
        arr2[i] = arr[i];
    }
        int temp = arr2[p];
        arr2[p] = arr2[q];
        arr2[q] = temp;
    
    
    for(int i=0;i<n;i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}