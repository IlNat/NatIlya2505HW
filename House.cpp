#include <iostream>
#include "House.h"
#include "Flat.h"
using namespace std;

House::House()
{

	cout << "������� ����� ��� ������� ������������� ����: ";
	char nameOfHouse[30];
	cin >> nameOfHouse;
	cout << "������� ���������� ������� � ����: ";
	int amountOfFlats;
	cin >> amountOfFlats;
	setAmountOfFlats(amountOfFlats);
	cout << "��� " << *nameOfHouse;
	cout << "\n����� ��������.\t���������� �����������.\n";
	for (int i = 0; i < amountOfFlats; i++)
	{
		cout << i + 1 << "\t\t\t\t" << Flat.getAmountOfResident();
	}
}

void House::setNameOfHouse(char buffer[30])
{
	strcpy_s(nameOfHouse, 30, buffer);
}

void House::setAmountOfFlats(int amount)
{
	amountOfFlats = amount;
	Flat* flat = new Flat[amount];
}