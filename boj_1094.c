#include<stdio.h>
#include <Windows.h>

int main(void)
{
	int stick = 64;
	int temp = 0, i, x, a = 0;

	scanf_s("%d", &x);

	for (i = 1; temp != x; i++)
	{
		if (temp + stick <= x) //������̰� ���ϴ±��̺��� �۴�
		{
			temp = temp + stick; //���뿡 ����������̸� ����
			a++;
		}
		stick /= 2;
		
	}
	printf("%d", a);
	system("pause");
}