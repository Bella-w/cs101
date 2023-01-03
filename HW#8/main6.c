#include <stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n+2;i++){
        if(i==1||i==6)
            printf("*******\n");
        else printf("*     *\n");
    }
    return 0;
}
