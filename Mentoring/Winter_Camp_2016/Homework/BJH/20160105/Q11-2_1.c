#include <stdio.h>

int main()
{
	char v[100];
	int a=0;
	
	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", v);
	
	while(v[a] != '\0')
		a++;
	
	printf("�ܾ��� ����: %d \n", a);
	return 0;
}
