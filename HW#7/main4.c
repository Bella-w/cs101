#include<stdio.h>
int main() {
    int i=12345;
    int place1=i/1%10;
    int place10=i/10%10;
    int place100=i/100%10;
    int place1000=i/1000%10;
    int n=(i-i%10000)/10000;
    printf("%d%d%d%d%d",n,place1,place100,place10,place1000);
   return 0;
}
    
