#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n],a1[n],a2[n];
    int m = 0,g=0,k=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++,k++)
    {
        if (a[i] != 0)
        {
            a1[g++] = a[i];
        }
        else{
            for (int j = i+1; j < n; j++)
            {
                if (a[j] != 0)
                 {
                    a2[m++] = a[j];
                 }
                 else{
                     break;
                 }
            }
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ",a2[i]);
    }
    printf("%d",0);
    for (int i = 0; i < g; i++)
    {
        printf(" %d",a1[i]);
    }
    printf(" %d ",0);
    for (int i = k + 3 ; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}