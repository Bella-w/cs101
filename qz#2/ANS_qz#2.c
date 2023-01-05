#incloude<stdio.h>
void print_spaces(int r ,int rows){
  for(int i=r;i<rows;i++){
    printf(" ");
  }
}
void printf_stars(int r){
  for(int i=0;i<r*2-1;i++){
    printf("* ");
  }
  printf("\n");
}

int main(){
  int rows=5;
  for(int i=rows;i>=1;i--){
    print_spaces(i.rows);
    printf_stars(i);
  }
  return 0;
}
