#include <stdio.h>
void get_binary(int n){
    int num[8];
    for(int i=7;i>=0;i--){
        if(n%2==1)
            num[i]=1;
        else num[i]=0;
        n/=2;
    }
    for(int i=0;i<8;i++){
        printf("%d",num[i]);
        if(i==3) printf(" ");
    }
    printf("\n");
}
int main(){
    get_binary(6);
    get_binary(16);
    get_binary(255);
    return 0;
}
