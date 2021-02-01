/*#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	//pointer
	int sehnaz;
	int * ptrSehnaz;
	printf("Estimate Sehnaz's age: ");
	scanf("%d", &sehnaz);

	printf("\n");
	printf("%d --> Sehnaz's age", sehnaz);
	printf("\n");
	printf("%d --> Sehnaz's address", &sehnaz);
	printf("\n");

	ptrSehnaz = &sehnaz;
	printf("\n");
	printf("%d --> Sehnaz's address", &sehnaz);
	printf("\n");

	system("pause");
	return 0;
}*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct Person
{
	char name[50];
	char surname[50];
	int age;
	float phone;
};

void DisplayPerson(struct Person);

int main(void)
{
	struct Person people[50];

	int num;
	print("Enter the number of people: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter name: ");
		scanf("%s", &people[i].name);
		printf("Enter surname: ");
		scanf("%s", &people[i].surname);
		printf("Enter age: ");
		scanf("%d", &people[i].age);
		printf("Enter phone number: ");
		scanf("%f", &people[i].phone);
	}

	for (int i = 0; i < num; i++)
	{
		DisplayPerson(people[i]);
		printf("\n");
	}

	system("pause");
	return 0;
}

void DisplayPerson(struct Person p)
{
	printf("\n");
	printf("Name: %s\n", p.name);
	printf("Surname: %s\n", p.surname);
	printf("Age: %d\n", p.age);
	printf("Phone: %f\n", p.phone);
}

	/*char name[50];
	strcpy("Yasaklanmamis her sey zorunludur. ", name);
	printf("\n");
	printf("%s\n", name);
	printf("\n");
	printf("%s\n", name);*/

	/*struct Person p;
	strcpy(p.name, "Refiye Sehnaz");
	strcpy(p.surname, "Yildirim");
	p.age = 19;
	p.phone = 5384099886;
	DisplayPerson(p);

	struct Person p2;
	printf("Enter name: ");
	scanf("%s", &p2.name);
	printf("Enter surname: ");
	scanf("%s", &p2.surname);
	printf("Enter age: ");
	scanf("%d", &p2.age);
	printf("Enter phone number: ");
	scanf("%f", &p2.phone);
	DisplayPerson(p2);*/
