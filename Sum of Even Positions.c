#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
        if(i%2==0)
        sum+=A[i];
    }
    printf("%d",sum);
}