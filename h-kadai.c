#include<stdio.h>
#include<string.h>

int main(void) {
  //int i,j;
  srand(time(NULL));
  int a = rand() % 10;  // ここで乱数1を発生し、aにおく
  printf("%d\n", a);
  
  //a < b = 0;
  //a > b =1;
  printf("高ければ1を。低ければ0を入力してください。\n");
    scanf("%d", j);
    
    int b = rand() % 10;  //乱数2を発生し、bにおく
    //printf("%d\n", b);
    if (( a < b && j == 0 ) || ( a > b && j == 1 )) {
      
    } else if (( a < b && j == 1 ) || ( a > b && j == 0)) {
      
    } else if () {
      
    }
  return 0;
}
