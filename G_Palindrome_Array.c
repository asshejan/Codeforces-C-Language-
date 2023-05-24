#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int compareArray(int a[],int b[],int size)	{
	int i;
	for(i=0;i<size;i++){
		if(a[i]!=b[i])
			return 1;
	}
	return 0;
}

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    int arr2[n];
    
    for(int i=n-1;i>=0; i--){
        arr2[i] = arr[i];
        // printf("%d ", arr2[i]);
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ", arr1[i]);
    // }
    
    if(compareArray(arr1,arr2,n) == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}