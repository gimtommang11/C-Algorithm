//��������
#include<stdio.h>
#include<stdlib.h>


int a;

int* arrSize(int* arr) //�迭�� �����Ҵ��ϴ� �Լ�
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
	int size = sizeof(arr) / sizeof(int);		// �迭 ����� ����

	for (int k = 0; k < a; k++)			//�Է�
	{
		scanf_s("%d", &arr[k]);
	}

	for (i = a - 1; i != 1; i--)		// �ѹ� ���� -> �ں��� �迭�� �ϳ��� ����
	{
		for (j = 0; j < i ; j++)		
		{
			printf("swap��: %d\t", arr[j]);
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			printf("swap��: %d\t i : %d\n", arr[j], i);
		}
	}

	for (int l = 0; l < a; l++) //���
	{
		printf("%d ", arr[l]);
	}
	system("pause");
}