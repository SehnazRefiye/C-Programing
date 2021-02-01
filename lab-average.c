#include<stdio.h>
#pragma warning(disable: 4996)

typedef struct Lab
{
	float lab1;
	float lab2;
	float lab3;
}Lab;

int main(void)
{
	Lab students[5];
	float average[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Enter grade: ");
		scanf_s("%f", &students[i].lab1);
		printf("Enter grade: ");
		scanf_s("%f", &students[i].lab2);
		printf("Enter grade: ");
		scanf_s("%f", &students[i].lab3);
	}
	for (int i = 0; i < 5; i++)
	{
		average[i] = (students[i].lab1 + students[i].lab2 + students[i].lab3) / 3;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("The average of grade student %d is %f \n", i + 1, average[i]);
	}
	system("pause");
	return 0;
}