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
	printf("100-200֮��һ����%d������\n", count);
	system("pause");
	return 0;
}
//��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main(){
	char ch;
	while (1){
	ch = getchar();
	if (isalpha(ch)){
	 putchar(ch ^ 32);
	 //^ ���Ըı�ĳһλ��״̬			
	 //| ����ǿ��ĳһλ��1
	 //&~ ����ǿ��ĳһλ��0
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