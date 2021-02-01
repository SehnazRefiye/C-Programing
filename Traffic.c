#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 999
struct Person
{
	int personID;
	float TC;
	char name[10];
	char surname[10];
};

typedef struct Person Person;

typedef struct Car
{
	int carID;
	char plate[10];
	Person person;
}Car;

typedef struct Fee
{
	int feeID;
	Car car;
}Fee;

void Menu();
void InitializeEntities(Person[], Car[], Fee[]);
void EnterPerson(Person[]);
Person FindPersonTC(Person[], float);
void ShowPerson(Person);

int main(void)
{

	Menu();

	system("pause");
}

void Menu()
{
	Person people[SIZE];
	Car cars[SIZE];
	Fee fees[SIZE];
	float TC;
	InitializeEntities(people, cars, fees);
	int choice;
	do
	{
		printf("1 - Enter a person: \n");
		printf("2 - Enter a car: \n");
		printf("3 - Kes cezami: \n");
		printf("4 - Show fees: \n");
		printf("5 - Find a person: \n");
		printf("9 - Exit program.\n");
		printf("Select a process = ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			EnterPerson(people);
			break;
		case 2:
		case 3:
		case 4:
			break;
		case 5:
			printf("Enter a TC = ");
			scanf("%f", &TC);
			Person p = FindPersonTC(people, TC);
			if (p.personID == 0)
			{
				printf("There is no person with this TC!\n");
			}
			else
			{
				ShowPerson(p);
			}
			break;
		default:
			printf("Wrong entry!\n");
			break;
		}

	} while (choice != 9);
}

void ShowPerson(Person p)
{
	printf("TC = %f\nName = %s\nSurname = %s\n",p.TC, p.name, p.surname);
}

Person FindPersonTC(Person people[], float TC)
{
	Person p;
	p.personID = 0;
	int i = 0;
	while (i < SIZE && people[i].TC != TC)
	{
		i++;
	}
	if (i == SIZE)
	{
		return p;
	}
	else
	{
		p = people[i];
		return p;
	}
}

void EnterPerson(Person people[])
{
	int emptySlot = 0;
	while (emptySlot < SIZE && people[emptySlot].personID != 0)
	{
		emptySlot++;
	}

	printf("Enter name = ");
	scanf("%s", &people[emptySlot].name);
	printf("Enter surname = ");
	scanf("%s", &people[emptySlot].surname);
	printf("Enter TC = ");
	scanf("%f", &people[emptySlot].TC);
	people[emptySlot].personID = emptySlot + 100;
}

void InitializeEntities(Person people[], Car cars[], Fee fees[])
{
	for (int i = 0; i < SIZE; i++)
	{
		people[i].personID = 0;
		cars[i].carID = 0;
		fees[i].feeID = 0;
	}
}
