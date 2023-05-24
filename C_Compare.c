#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    char x[20], y[20];
    scanf("%s %s", x, y);

    int v = strcmp(x,y);
    if(v<0){
        printf("%s", x);
    }
    else if(v>0){
        printf("%s", y);
    }
    else{
        printf("%s", x);
    }

    // int i=0;
    // while(1){
    //   if(x[i]== '\0' && y[i] == '\0'){
    //         printf("%s", x);
    //         break;
    //     }
    //     else if(x[i]== '\0'){
    //         printf("%s", x);
    //         break;
    //     }
    //     else if(y[i]== '\0'){
    //         printf("%s", y);
    //         break;
    //     }
    //     if(x[i]==y[i]){
    //         i++;
    //     }
    //     else if(x[i]<y[i]){
    //         printf("%s", x);
    //         break;
    //     }
    //     else{
    //         printf("%s", y);
    //         break;
    //     }
      
    // } 
     
    return 0;
}