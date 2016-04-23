#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
  int imp;
  int num1 = number(imp, num1, num2);
  int num2 = number(imp, num1, num2);
  
  printf("数当てだよ！\n");
  
  printf("%d %s %d =\n", num1, enzan(imp, num1, num2), num2);
  
  printf("計算結果を入力してください\n");
    scanf("%d", &imp);

    if (imp == kekka(imp, num1, num2)) { // 正解の場合
      printf("正解！\n");
    } else if (imp != kekka(imp, num1, num2)) { //  不正解の場合
      printf("不正解\n");
    } else {
    break;
}

int number(int imp, int num1, int num2) //数字をランダムで発生
{
  srand((unsigned)time(NULL));
  return rand() % 10;
}

int enzan(int imp, int num1, int num2)  //+,=,*,/をランダムで発生
{
  char *enzanshi[4] = {"+","-","*","/"};
  srand((unsigend)time(NULL));
  return enzanshi[rand() % 4];
}

int kekka(int imp, int num1, int num2)  //ランダムで発生させた値の計算結果
{
  int goukei = 0;
  if ( enzan(imp, num1, num2) == '+') {
    num1 + num2;
    
  } else if (enzan(imp, num1, num2) == '-') {
    num1 - num2;
  
  } else if (enzan(imp, num1, num2) == '*') {
    num1 * num2;
  
  } else if (enzan(imp, num1, num2) == '/'){
    num1 / num2;
  
  } else {
  break;
  }
  //return;
}
