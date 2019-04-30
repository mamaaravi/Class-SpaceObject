#include "pch.h"
#include "spaceobj.h"
int main()
{
	int num = 0;
	cout << "Enter the number of celestial bodies: ";
	cout << "Enter the number of celestial bodies: ";

	cin >> num;
	system("cls");

	CelestialBody *arr = new CelestialBody[num];

	for (int i = 0; i < num; i++)
		arr[i].InputSO();
	for (;;)
	{
		Menu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
		{
			for (int i = 0; i < num; i++)
				arr[i].OutputSO();

			break;
		}
		case 1:
		{
			for (int i = 0; i < num; i++)
				arr[i].CompareWithEarthMass();
			break;
		}
		case 2:
		{
			for (int i = 0; i < num; i++)
				arr[i].LifeExistence();
			break;
		}
		case 3:
		{
			system("pause"); return 0;
		}
		}
	}
}