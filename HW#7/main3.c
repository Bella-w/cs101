#include <stdio.h>
int main()
{
// 法一
  for(int count=0;count<81;count++){
        int x=(count/9)+1;
        int y=((count)%9+1);
        printf("%d*%d=%d\t",x,y,y*x);
        if (y==9)
            printf("\n");
  }
// 法二
    // for (int x=1,y=1;x<=9;y++){
    //     printf("%d*%d=%d\t",x,y,x*y);
    //     y<9 ? y:(y=0,x++,printf("\n"));
    // }
    return 0;
}
