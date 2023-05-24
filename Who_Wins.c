#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d", &n);

    long long int t[n], p[n]; 
    for(int i=0;i<n;i++){
           scanf("%lld %lld", &t[i], &p[i]);
    }
    int ct=0, cp=0;
    for(int i=0;i<n;i++){
           if(t[i]>p[i]){
               ct++;
           }
           if(p[i]>t[i]){
               cp++;
           }
           
    }
    if(ct>cp){
        printf("Tiger");
    }
    else if(cp>ct){
        printf("Pathan");
    }else{
        printf("Draw");
    }
     
    return 0;
}