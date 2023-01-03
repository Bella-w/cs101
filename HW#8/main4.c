#include <stdio.h>
void round_func(float f){
    if (f-(int)f>0.5)
        printf("%g-> %d\n",f,(int)f+1);
    else
        printf("%g-> %d\n",(double)f,(int)f);
}
int main(){
    round_func(1.4);
    round_func(2.6);
    round_func(2.34);
    round_func(9.2344567789);
    return 0;
}
