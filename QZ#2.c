#include <stdio.h>

void print_spaces(int r, int rows){
    for(int space=1;space<=r;space++){
        printf("  ");
    }
}
void print_stars(int r){
    for(int i=1;i<=9-2*r;i++){
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int rows=5;
    for (int r=0;r<rows;r++){
        print_spaces(r,rows);
        print_stars(r);
    }
    return 0;
}
