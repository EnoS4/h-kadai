#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define word 4
#define max 10

/*ランダムで数字1と2、算術演算子が出力
ユーザーが出力された値の計算結果を入力し、
実際の計算結果とあっているか判定*/

int number();
int enzan();
int kekka(int num1, int num2);

int main(void) {
	 int input;
	 
	 printf("数当てだよ！\n");
	
	while(1){
		int num1 = number();
		int num2 = number();
		int result = kekka(num1, num2);
	
		printf("%d %s %d =\n", num1, enzan(), num2);
	  
	  	printf("計算結果を入力してください\n");
	  	scanf("%d", &input);
	  	printf("%d\n", input);
	
	//入力した値と計算結果の比較、判定
	    if (input == result) {
	      printf("= %d\n正解！\n",result);
	    } else if (input != result) {
	      printf("= %d\n不正解！\n",result);
	      break;
	    }
	}
	return 0;
}

int number() //数字をランダムで発生
{
  srand((unsigned)time(NULL));
  return rand() % max;
}

int enzan()  //+,=,*,/をランダムで発生
{
 	char *enzanshi[] = {"+","-","*","/"};
  	srand((unsigned)time(NULL));
  	return enzanshi[rand() % word];
}

int kekka(int num1, int num2)  //ランダムで発生させた値の計算結果
{
	int goukei = 0;
	if ( enzan() == "+") {
  		goukei = num1 + num2;
  	} else if (enzan() == "-") {
		goukei = num1 - num2;
  	} else if (enzan() == "*") {
    	goukei = num1 * num2;
  	} else if (enzan() == "/"){
  	    if (num2 == 0) {
    		/*エラー処理*/
    		
    		return 0;
    	}
    	goukei = num1 / num2;
  	}
  	return goukei;
}
