#include<stdio.h>
#include<time.h>

int main(void) {
  int i,j,k;
  k = 0;
  i = 0;
  j = 0;
  srand(time(NULL));
  
  while( j == 1 && k < 3 ){
    
  //printfでhigh&lowのゲームであること。最初の数字と比べてこの後の数字が高いか低いかを入力してもらうこと説明する。
  
  int a = rand() % 10;  // ここで乱数1を発生し、aにおく
  printf(" a = %d\n", a);
  
  printf("aより次に出る数字が大きいと思うなら1を。小さいと思うなら0を入力してください。\n");
    scanf("%d", &i);
    
    int b = rand() % 10;  //乱数2を発生し、bにおく
    printf(" b = %d\n", b);
    
    if (( a < b && i == 0 ) || ( a > b && i == 1 )) { // 正解の場合
      printf("正解(a=%d, b=%d)", a, b);
    } else if (( a < b && i == 1 ) || ( a > b && i == 0 )) { //  不正解の場合
      printf("不正解(a=%d, b=%d)", a, b);
      printf("このまま続ける場合は1を、ゲームをやめる場合は0を入力してください。\n");
      scanf("%d", &j);
      
    } else if ( a == b ) {  //  aとbが等しかった場合
      printf("(a=%d, b=%d)", a, b);
    } else {
      printf("エラー");
      break;
    }
    k++;
    
  }
  return 0;
}
