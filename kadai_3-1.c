#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int number(int imp, int num1, int num2);
int enzan(int imp, int num1, int num2);
int kekka(int imp, int num1, int num2);

int main(void) {
  int imp;
  int num1;
  int num2;
  char *enzanshi[4];
  
  num1 = number(imp, num1, num2);
  num2 = number(imp, num1, num2);
  
  printf("数当てだよ！\n");

  //printf("%d %s %d =\n", num1, enzan(imp, num1, num2), num2);
  printf("%d\n", num1);
  printf("%s\n", *enzanshi);
  printf("%d =\n", num2);
  
  printf("計算結果を入力してください\n");
  scanf("%d", &imp);
  printf("%d\n", imp);
  //printf("%s",&enzanshi[1]);
  
    /*if (imp == kekka(imp, num1, num2)) { // 正解の場合
      printf("正解！\n");
    } else if (imp != kekka(imp, num1, num2)) { //  不正解の場合
      printf("不正解！\n");
    }*/ 
	return 0;
}

int number(int imp, int num1, int num2) //数字をランダムで発生
{
  srand((unsigned)time(NULL));
  return rand() % 10;
}

int enzan(int imp, int num1, int num2)  //+,=,*,/をランダムで発生
{
  //char *enzanshi[] = {"+","-","*","/"};
  char enzanshi[0] = '+';
  char enzanshi[1] = '-';
  char enzanshi[2] = '*';
  char enzanshi[3] = '/';
  srand((unsigned)time(NULL));
  //return enzanshi[rand() % 4];
  enzanshi[] = rand() % 4; 
}

/*int kekka(int imp, int num1, int num2)  //ランダムで発生させた値の計算結果
{
	int goukei;
  if ( enzan(imp, num1, num2) == '+') {
  	goukei = num1 + num2;
    //return goukei;
  } else if (enzan(imp, num1, num2) == '-') {
	goukei = num1 - num2;
  	//return goukei;
  } else if (enzan(imp, num1, num2) == '*') {
    goukei = num1 * num2;
  	//return goukei;
  } else if (enzan(imp, num1, num2) == '/'){
    goukei = num1 / num2;
    //return goukei;
  }
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int number(int imp, int num1, int num2);
int enzan(int imp, int num1, int num2);
int kekka(int imp, int num1, int num2);

int main(void) {
  int imp;
  int num1;
  int num2;
  char *enzanshi[4];
  
  num1 = number(imp, num1, num2);
  num2 = number(imp, num1, num2);
  
  printf("数当てだよ！\n");

  printf("%d %s %d =\n", num1, enzan(imp, num1, num2), num2);
  
  printf("計算結果を入力してください\n");
  scanf("%d", &imp);
  printf("%d\n", imp);
  //printf("%s",&enzanshi[]);
  
    /*if (imp == kekka(imp, num1, num2)) { // 正解の場合
      printf("正解！\n");
    } else if (imp != kekka(imp, num1, num2)) { //  不正解の場合
      printf("不正解！\n");
    }*/ 
	return 0;
}

int number(int imp, int num1, int num2) //数字をランダムで発生
{
  srand((unsigned)time(NULL));
  return rand() % 10;
}

int enzan(int imp, int num1, int num2)  //+,=,*,/をランダムで発生
{
  char *enzanshi[] = {"+","-","*","/"};
  srand((unsigned)time(NULL));
  return enzanshi[rand() % 4];
}

/*int kekka(int imp, int num1, int num2)  //ランダムで発生させた値の計算結果
{
	int goukei;
  if ( enzan(imp, num1, num2) == '+') {
  	goukei = num1 + num2;
    //return goukei;
  } else if (enzan(imp, num1, num2) == '-') {
	goukei = num1 - num2;
  	//return goukei;
  } else if (enzan(imp, num1, num2) == '*') {
    goukei = num1 * num2;
  	//return goukei;
  } else if (enzan(imp, num1, num2) == '/'){
    goukei = num1 / num2;
    //return goukei;
  }
}
*/
