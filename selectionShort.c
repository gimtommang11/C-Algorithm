//���� ����
//ù ���� �ٸ� ���� ���Ѵ� �̶� ���� ���� Ư�� ������ �ִ´�
//�� Ư�� ������ �迭 �� �հ� ��ü�� �� �迭�� ����

#include<stdio.h>
#include<stdlib.h>

int a;

int* arrSize(void) //�迭�� �����Ҵ��ϴ� �Լ�
{

	int* ary;
	scanf_s("%d", &a);

	ary = (int*)malloc(sizeof(int)*a);

	return ary;
}

int main(void)
{
	int* arr = arrSize();
	int temp;

	for (int i = 0; i < a; i++)			// �Է�
	{
		scanf_s("%d", &arr[i]);
	}

	for (int k = 0; k < a - 1; k++)
	{
		for (int j = k; j < a - 1; j++)
		{
			if (arr[j + 1]< arr[k] )
			{
				/*printf("if %d < %d\n", arr[j + 1], arr[k]);*/
				temp = arr[k];
				arr[k] = arr[j + 1];
				arr[j + 1] = temp;

				/*printf("temp : %d\t arr[j] : %d\n", temp, arr[j + 1]);*/
			}	
		}
		//printf("arr[k] : %d\n", arr[k]);
	
	}
	for (int l = 0; l < a; l++)		// ���
		{
			printf("%d ", arr[l]);
		}
		system("pause");
}