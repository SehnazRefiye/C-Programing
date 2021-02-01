#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define SIZE 9999

struct Student
{
	int number;
	char name[20];
	char surname[20];
	float midGrade;
	float finGrade;
	float avgGrade;
	char letterGrade[2];
};

void DisplayStudent(struct Student);
void InsertStudents(struct Student[], int);

int main(void)
{
	struct Student students[SIZE];
	int size;
	printf("Enter number of students: ");
	scanf("%d", &size);
	InsertStudents(students, size);
	for (int i = 0; i < size; i++)
	{
		DisplayStudent(students[i]);
		printf("\n");
	}
	system("pause");
}

void InsertStudents(struct Student s[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter the number: ");
		scanf("%d", &s[i].number);
		printf("Enter the name: ");
		scanf("%s", &s[i].name);
		printf("Enter the surname: ");
		scanf("%s", &s[i].surname);
		printf("Enter the midterm grade: ");
		scanf("%f", &s[i].midGrade);
		printf("Enter the final grade: ");
		scanf("%f", &s[i].finGrade);
		s[i].avgGrade = s[i].midGrade * 0, 4 + s[i].finGrade * 0, 6;
		if (s[i].avgGrade > 90)
		{
			strcpy(s[i].letterGrade, "A1");
		}
		else if (s[i].avgGrade > 80)
		{
			strcpy(s[i].letterGrade, "A2");
		}
		else if (s[i].avgGrade > 70)
		{
			strcpy(s[i].letterGrade, "A3");
		}
		else if (s[i].avgGrade > 60)
		{
			strcpy(s[i].letterGrade, "B1");
		}
		else if (s[i].avgGrade > 50)
		{
			strcpy(s[i].letterGrade, "B2");
		}
	}
}

void DisplayStudent(struct Student s)
{
	printf("Number= %d \n", s.number);
	printf("Name= %s \n", s.name);
	printf("Surname= %s \n", s.surname);
	printf("MÝdterm Grade= %f \n", s.midGrade);
	printf("Final Grade= %f \n", s.finGrade);
	printf("Average Grade= %f \n", s.avgGrade);
	printf("Letter Grade= %s \n", s.letterGrade);
}