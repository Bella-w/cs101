#include <stdio.h>
int main()
{
    int n=7;
    for(int i=1;i<=n;i++){
        printf("%*d ",n+1-i,i);
        for(int j=0;j<i-1;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
