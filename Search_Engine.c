#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int t;
    scanf("%d", &t);
    
    int n, e, index=0;
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        int flag=0;
        scanf("%d", &e);
        for(int i=0;i<n;i++){
            if(arr[i]==e){
                flag=1;
                index=i;
                break;
            }
        }    
        if(flag==1){
          printf("Case %d: %d\n", i+1, index+1);
        }else{
          printf("Case %d: Not Found\n", i+1);
        }
        
    }
     
    return 0;
}