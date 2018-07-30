#include<stdio.h>
#include <Windows.h>

int main(void)
{
	int stick = 64;
	int temp = 0, i, x, a = 0;

	scanf_s("%d", &x);

	for (i = 1; temp != x; i++)
	{
		if (temp + stick <= x) //막대길이가 원하는길이보다 작다
		{
			temp = temp + stick; //막대에 원래막대길이를 더함
			a++;
		}
		stick /= 2;
		
	}
	printf("%d", a);
	system("pause");
}