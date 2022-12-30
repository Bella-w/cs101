#include <stdio.h>
int count1(int i){
//   法一
    int count=0;
    for(int j=0;j<8;j++){
        if (i%2==1)
            count++;
        i/=2;
    }
//   法二
//     int count=0;
//     char num=sizeof(i)*8;
//     for(int j=0;j<num;j++)
//     {
//         if( i & (1<< j) )
//             count++;
//     }
    return count;
}
int main()
{
    int i=15;
    printf("%d",count1(i));
    return 0;
}
