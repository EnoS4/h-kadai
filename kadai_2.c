#include<stdio.h>
#include<time.h>

int main(void) {
	
  int i,j,k;
  k = 0;
  i = 0;
  j = 0;
  srand(time(NULL));
  printf("high&lowだよ！\n");
  do {
  
  int a = rand() % 10;  // ここで乱数1を発生し、aにおく
  printf(" a = %d\n", a); //aを出力する
  
  printf("%d より次に出る数字が大きいと思うなら1、小さいと思うなら0を入力してください。\n", a);
    scanf("%d", &i);
    if ( i > 1 ) {  //    iに0,1以外の数字を入れた場合の出力
    printf("エラー\n");
      break;	//終了させる
    }
    
    int b = rand() % 10;  //乱数2を発生し、bにおく
    printf(" b = %d\n", b); //bを出力する
    
    if (( a < b && i == 1 ) || ( a > b && i == 0 )) { // 正解の場合
      printf("正解(a=%d, b=%d)\n", a, b); //a,bの値と正解であることを出力
      
    } else if (( a < b && i == 0 ) || ( a > b && i == 1 )) { //  不正解の場合
      printf("不正解(a=%d, b=%d)\n", a, b); //a,bの値と不正解であることを出力
      printf("このまま続ける場合は1、ゲームをやめる場合は0を入力してください。\n");
      scanf("%d", &j);
      
      if ( j > 1 ) {
      printf("エラー\n"); //jに0,1以外が入力された場合エラーと出力
      break;  //終了
      }
      
    } else if ( a == b ) {  //  aとbが等しかった場合
      printf("(a=%d, b=%d)\n", a, b);
    }
    k++;
  } while ( j == 1 && k < 3 ) ; //不正解時にゲームを続けた時と正解不正解に限らず3回ゲームを行ったときに終わるようにする
  return 0;
}
