#include<stdio.h>
#pragma warning(disable:4996)
#define SIZE 9999

struct Person
{
	char name[20];
	char surname[20];
	int age;
	int height;
	int weight;
	char eyeColor[10];
	char race[10];
};

void InsertFugitives(struct Person[], int);
void DisplayFugitives(struct Person[], int);

int main(void)
{
	struct Person fugitives[SIZE];
	int size;
	printf("Enter the number of fugitives = ");
	scanf("%d", &size);
	InsertFugitives(fugitives, size);
	DisplayFugitives(fugitives, size);


	system("pause");
}

void InsertFugitives(struct Person p[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter %dth fugitive's name = ", i + 1);
		scanf("%s", &p[i].name);
		printf("Enter %dth fugitive's surname = ", i + 1);
		scanf("%s", &p[i].surname);
		printf("Enter %dth fugitive's age = ", i + 1);
		scanf("%d", &p[i].age);
		printf("Enter %dth fugitive's height = ", i + 1);
		scanf("%d", &p[i].height);
		printf("Enter %dth fugitive's weight = ", i + 1);
		scanf("%d", &p[i].weight);
		printf("Enter %dth fugitive's eye color = ", i + 1);
		scanf("%s", &p[i].eyeColor);
		printf("Enter %dth fugitive's race = ", i + 1);
		scanf("%s", &p[i].race);
		printf("\n");
	}
}

void DisplayFugitives(struct Person p[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s %s has %s eyes and %d tall",p[i].name, p[i].surname, p[i].eyeColor,p[i].height);
		if (p[i].age < 20)
		{
			printf(" teenager.");
		}
		else if (p[i].age >= 20 && p[i].age < 40)
		{
			printf(" middle-aged");
		}
		else
		{
			printf(" old-aged");
		}
		printf("\n");
		printf("Price = %d\n\n", rand());
	}
}
