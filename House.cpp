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