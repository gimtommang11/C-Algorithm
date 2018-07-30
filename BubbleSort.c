//버블정렬
#include<stdio.h>
#include<stdlib.h>


int a;

int* arrSize(int* arr) //배열을 동적할당하는 함수
{
	
	int* ary;
	scanf_s("%d", &a);

	ary = (int*)malloc(sizeof(int)*a);

	return ary;
}

int main(void)
{
	int* arr= NULL;
	arr=arrSize(arr);
	int i, j;		
	int temp = 0;
	int size = sizeof(arr) / sizeof(int);		// 배열 요소의 개수

	for (int k = 0; k < a; k++)			//입력
	{
		scanf_s("%d", &arr[k]);
	}

	for (i = a - 1; i != 1; i--)		// 한번 돈다 -> 뒤부터 배열을 하나씩 뺀다
	{
		for (j = 0; j < i ; j++)		
		{
			printf("swap전: %d\t", arr[j]);
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			printf("swap후: %d\t i : %d\n", arr[j], i);
		}
	}

	for (int l = 0; l < a; l++) //출력
	{
		printf("%d ", arr[l]);
	}
	system("pause");
}