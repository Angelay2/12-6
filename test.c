#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
int IsPrime(int num){
	for (int i = 2; i < num; i++){
		if (num % i == 0){
		return 0;
		}
	}	
	return 1;
}
int one(){
	int count = 0;

	int i = 100;
	for (; i <= 200; i++){
		IsPrime(i);
		if (IsPrime(i) == 1){
		printf("%d\n", i);
		count++;
		}
	}
	printf("100-200之间一共有%d个素数\n", count);
	system("pause");
	return 0;
}
//编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main(){
	char ch;
	while (1){
	ch = getchar();
	if (isalpha(ch)){
	 putchar(ch ^ 32);
	 //^ 可以改变某一位的状态			
	 //| 可以强制某一位变1
	 //&~ 可以强制某一位变0
			}
			else if (isdigit(ch))
			{
				//do nothing
			}
			else
			{
				putchar(ch);
			}
		}
	system("pause");
	return 0;
}