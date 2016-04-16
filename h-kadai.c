#include<stdio.h>
#include<string.h>
#include<time.h>

int main(void) {
  int i,j,k;
  srand(time(NULL));
  int a = rand() % 10;  // ここで乱数1を発生し、aにおく
  printf("%d\n", a);
  while( j == 1 && k++){
  //a < b = 0;
  //a > b =1;
  //printfでhigh&lowのゲームであること。最初の数字と比べてこの後の数字が高いか低いかを入力してもらうこと説明する。
  printf("高ければ1を。低ければ0を入力してください。\n");
    scanf("%d", &i);
    
    int b = rand() % 10;  //乱数2を発生し、bにおく
    if (( a < b && i == 0 ) || ( a > b && i == 1 )) { // 正解の場合
      
    } else if (( a < b && i == 1 ) || ( a > b && i == 0 )) { //  不正解の場合
      printf("このまま続ける場合は1を、ゲームをやめる場合は0を入力してください。\n");
      scanf("%d", &j);
    } else if ( a == b ) {  //  aとbが等しかった場合
      
    }
    break;
  return 0;
}
