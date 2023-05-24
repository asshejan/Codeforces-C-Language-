#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
     
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int L,R;
        scanf("%lld %lld",&L,&R);
        long long sum = 0;
        //formula of some of a range n(a+b)/2. n is the difference of a & b
        long long int diff = labs(L - R) +1;
        sum = (diff*(L+R))/2;
        printf("%lld\n",sum);
        
    }
    
    return 0;
}