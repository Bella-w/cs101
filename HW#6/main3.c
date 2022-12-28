#include <stdio.h>
int main()
{
    int year =2022;
    if (year%4==0){
        if(year%100!=0)
            printf("是閏年");   
    }
    else
        printf("不是閏年");
    return 0;
}
