#include <stdio.h>

int main()
{
	char str[]="Good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("null ���� ������ ���: %c \n", str[13]);
	printf("null ���� ������ ���: %d \n", str[13]);
	
	str[12]='?';      //�迭 str�� ����� ���ڿ� �����ʹ� ���� ����! 
	printf("���ڿ� ���: %s \n", str);
	return 0;
}
