#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define max 4
#define count 1

/*ランダムで数字1と2、算術演算子が出力
ユーザーが出力された値の計算結果を入力し、
実際の計算結果とあっているか判定*/

int enzan(int input);
int kekka(int input, int num1, int num2);

int main(void) {
	int input, cnt;
  	int num1, num2 = 0;

  	srand((unsigned)time(NULL));
	
	for(cnt = 0; cnt < count; cnt++){
		
	  	num1 = rand() % 10;
	  	num2 = rand() % 10;
		  
		printf("数当てだよ！\n");
	
		printf("%d %s %d =\n", num1, enzan(input), num2);
	  
	  	printf("計算結果を入力してください\n");
	  	scanf("%d", &input);
	  	printf("%d\n", input);
	
	    if (input == kekka(input, num1, num2)) { // 正解の場合
	      printf("= %d\n正解！\n",kekka(input, num1, num2));
	    } else if (input != kekka(input, num1, num2)) { //  不正解の場合
	      printf("= %d\n不正解！\n",kekka(input, num1, num2));
	    }
	}
	return 0;
}

int enzan(int input)  //+,=,*,/をランダムで発生
{
 	char *enzanshi[] = {"+","-","*","/"};
  	srand((unsigned)time(NULL));
  	return enzanshi[rand() % max];
}

int kekka(int input, int num1, int num2)  //ランダムで発生させた値の計算結果
{
	int goukei = 0;
	if ( enzan(input) == "+") {
  		goukei = num1 + num2;
  	} else if (enzan(input) == "-") {
		goukei = num1 - num2;
  	} else if (enzan(input) == "*") {
    	goukei = num1 * num2;
  	} else if (enzan(input) == "/"){
    	goukei = num1 / num2;
  	}
  	return goukei;
}
