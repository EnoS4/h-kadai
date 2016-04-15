#include<stdio.h>
#include<string.h>

int main(void) {
  int i,j;
  srand((unsigned) time(NULL));
    printf("%d\n", rand()%10);
  // ここで乱数1を発生し、aにおく
  //a < b = 0;
  //a > b =1;
  printf("高ければ1を。低ければ0を入力してください。\n");
    gets(j);
    
    srand((unsigned) time(NULL));
    printf("%d\n", rand()%10);  //乱数2を発生し、bにおく
    if (( a < b ) == j) {
      
    }
  return 0;
}
