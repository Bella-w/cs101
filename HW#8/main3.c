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
}
int main(){
    int n=6;
    get_binary(n);
    return 0;
}
// 不知道這題的值要設甚麼，所以設了第一個範例:6
