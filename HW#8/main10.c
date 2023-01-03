#include <stdio.h>

int get_digit(int n){
    return 0;
}

int main(){
    int n=1234;
    int sum=0;
    int remain;
    while(n!=0){
        remain=n%10;
        sum=sum*10+remain;
        n/=10;
    }
    printf("sum = %d\n",sum);
    return 0;
}
