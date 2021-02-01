#include<stdio.h>
#pragma warning(disable:4996)
#define SIZE 9999

void Display(int[], int);
void EnterValue(int arr[], int);
void FillSparseArray(int[], int[], int);
int FindMax(int[], int);

int main(void)
{
	/*int a[5] = { 1,2,3,4,5 };
	int b[5] = a;
	b[5]=a[5];
	b[2] = 88;

	Display(a,5);
	Display(b,5);
	*/

	int sparse[SIZE];
	int numbers[SIZE];
	int value;

	printf("PLease enter a value: ");
	scanf("%d", &value);

	EnterValue(numbers, value);
	Display(numbers, value-1);
	FillSparseArray(sparse, numbers, value);
	int max = FindMax(numbers, value);
	Display(sparse, value);
	

	system("pause");
	return 0;
}

void Display(int arr[], int size)
{
	for (int i = 0; i <= size; i++)
	{
		printf("%d --> ", arr[i]);
	}
}

void EnterValue(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Please enter a number: ");
		scanf("%d", &arr[i]);
	}
}

void FillSparseArray(int sparse[], int arr[], int size)
{
	int max = FindMax(arr, size);

	for (int i = 0; i < size; i++)
	{
		sparse[arr[i]] = 1;
	}
	for (int i = 0; i < size; i++)
	{
		if (sparse[i] != 1);
		{
			sparse[i] = 0;
		}
	}
}

int FindMax(int nums[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < nums[i])
		{
			max = nums[i];
		}
	}
	return max;
}
