#include <stdio.h>
void printSpace(int r , int rows){
    for(int space=1;space<=rows-r;space++){
        printf("  ");
    }
}
void printStar(int r){
    for (int i=1;i<=2*r-1;i++){
        printf("* ");
    }
    printf("\n");
}
int main()
{
    int rows=10;
    for(int r=0;r<rows;r++){
        printSpace(r,rows);
        printStar(r);
    }
    return 0;
}
