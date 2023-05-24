#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    long long int arr[3], a[3];
    for(int i=0;i<3;i++){
        scanf("%lld", &arr[i]);
    }
    for(int i=0;i<3;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
             if(arr[i]>arr[j]){
                int tmp = arr[i];
                arr[i]= arr[j];
                arr[j]=tmp;
            }
        }
        printf("%lld\n", arr[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%lld\n", a[i]);
    }


     
    return 0;
}