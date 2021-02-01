#include<stdio.h>
#pragma warning(disable:4996)

struct Student
{
	char name[30];
	char surname[30];
	float number;
	int midGrade;
	int finGrade;
	float avgGrade;
};

void DisplayStudent(struct Student);

int main(void)
{
	struct Student students[2];
	for (int i = 0; i < 2; i++)
	{
		printf("Enter the student name: ");
		scanf("%s", &students[i].name);

		printf("Enter the student surname: ");
		scanf("%s", &students[i].surname);

		printf("Enter the student number: ");
		scanf("%f", &students[i].number);

		printf("Enter the student midterm grade: ");
		scanf("%d", &students[i].midGrade);

		printf("Enter the student final grade: ");
		scanf("%d", &students[i].finGrade);

		students[i].avgGrade = (float)students[i].finGrade * 0, 6 + (float)students[i].midGrade * 0, 4;
	}
	printf("\n\n\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%dth student's: \n", i + 1);
		DisplayStudent(students[i]);
		printf("\n");
	}
	system("pause");
}

void DisplayStudent(struct Student s)
{
	printf("Number: %f\n", s.number);
	printf("Name: %s\n", s.name);
	printf("Surname: %s\n", s.surname);
	printf("Midterm Grade: %d\n", s.midGrade);
	printf("Final Grade: %d\n", s.finGrade);
	printf("Average: %f\n", s.avgGrade);
}
