//선택 정렬
//첫 수와 다른 수를 비교한다 이때 작은 수를 특정 변수에 넣는다
//그 특정 변수를 배열 맨 앞과 교체한 후 배열을 뺀다

#include<stdio.h>
#include<stdlib.h>

int a;

int* arrSize(void) //배열을 동적할당하는 함수
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

	for (int i = 0; i < a; i++)			// 입력
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
	for (int l = 0; l < a; l++)		// 출력
		{
			printf("%d ", arr[l]);
		}
		system("pause");
}