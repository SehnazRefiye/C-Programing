#include<stdio.h>
#include<stdbool.h>
#pragma warning(disable:4996)
#define SIZE 9999
struct Student
{
	double studentNumber;
	char name[20];
	char surname[20];
	char gender;
	char birthDate[8];
	char department[20];
	bool isValid;
};

void Menu();
void EnterStudent(struct Student[]);
void InitializeStudents(struct Student[]);
void EnterMultipleStudents(struct Student[], int);

int main(void)
{
	Menu();

	system("pause");
}

void Menu()
{
	struct Student students[SIZE];
	InitializeStudents(students);
	int choose;
	do
	{
		printf("1- Enter one student: \n");
		printf("2- Enter multiple students: \n");
		printf("3- Display all students: \n");
		printf("4- Delete a student: \n");
		printf("5- Exit program. \n");
		printf("Select a process= ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			EnterStudent(students);
			break;
		case 2:
			printf("Enter the number of students: ");
			int num;
			scanf("%d", &num);
			EnterMultipleStudents(students, num);
			break;
		}
	} while (choose != 9);
}

void EnterMultipleStudents(struct Student students[], int num)
{
	int i = 0;
	while (i < num)
	{
		if (students[i].studentNumber == 0)
		{
			printf("Enter the student's number= ");
			scanf("%g", &students[i].studentNumber);

			printf("Enter the student's name= ");
			scanf("%s", &students[i].name);

			printf("Enter the student's surname= ");
			scanf("%s", &students[i].surname);

			printf("Enter the student's gender= ");
			scanf("%s", &students[i].gender);

			printf("Enter the student's birthDate= ");
			scanf("%s", &students[i].birthDate);

			printf("Enter the student's department= ");
			scanf("%g", &students[i].department);

			students[i].isValid = 1;
			i++;
		}
	}
}

void EnterStudent(struct Student students[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (students[i].studentNumber == 0)
		{
			printf("Enter the student's number= ");
			scanf("%g", &students[i].studentNumber);

			printf("Enter the student's name= ");
			scanf("%s", &students[i].name);

			printf("Enter the student's surname= ");
			scanf("%s", &students[i].surname);

			printf("Enter the student's gender= ");
			scanf("%s", &students[i].gender);

			printf("Enter the student's birthDate= ");
			scanf("%s", &students[i].birthDate);

			printf("Enter the student's department= ");
			scanf("%g", &students[i].department);

			break;
		}
	}
}

void InitializeStudents(struct Student students[])
{
	for (int i = 0; i < SIZE; i++)
	{
		students[i].studentNumber = 0;
	}
}