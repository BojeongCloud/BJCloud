#include <stdio.h>

int main()
{
	int arr[5];
	int sum=0, a;
	
	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
	
	for(a=0; a<5; a++)
		sum += arr[a];
		
	printf("�迭��ҿ� ����� ���� �� : &d \n", sum);
	return 0;
}
                                //������ :
								//          �迭��ҿ� ����� ���� �� : &d
