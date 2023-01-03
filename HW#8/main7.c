#include <stdio.h>
void plus(int n){
    int sum=0;
    int hun,ten,one;
    hun=(n/100)%10;
    ten=(n/10)%10;
    one=n%10;
    if(n<0){
        sum=hun+(-ten)+(-one);
        printf("%d\n",sum);
    }
    else{
        sum=hun+ten+one;
        printf("%d\n",sum);
    }
}
int main(){
    int a=-999;
    int b=999;
    plus(a);
    plus(b);
    return 0;
}
