#include <stdio.h>
void print_top(){
    printf("X'mas tree!\n");
}
void print_truck(){
    for (int i=1;i<=5;i++)
        printf("      *\n");
}
void print_spaces(int n,int r){
    if(r==3){
        printf("    ");
        for (int i=1;i<=r-n;i++)
        printf(" ");
    }
    else if(r==5){
        printf("  ");
        for (int i=1;i<=r-n;i++)
        printf(" ");
    }
    else {
        for (int i=1;i<=r-n;i++)
        printf(" ");}
    
}
void print_stars(int n){
    for(int i=1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");
}
int main(){
    print_top();
    for(int i=1;i<=3;i++){
        print_spaces(i,3);
        print_stars(i);
    }
    for(int i=1;i<=5;i++){
        print_spaces(i,5);
        print_stars(i);
    }
    for(int i=1;i<=7;i++){
        print_spaces(i,7);
        print_stars(i);
    }
    print_truck();
    return 0;
}
