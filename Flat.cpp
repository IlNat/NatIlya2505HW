#include <iostream>
#include "Flat.h"
#include "Resident.h"
using namespace std;

Flat::Flat()
{
	//cout << "��������.\n";
	static int numberOfFlat = 1;
	cout << "�������� " << numberOfFlat << ":\n";
	numberOfFlat++;
	cout << "������� ���������� �����������: ";
	int amountOfResidents;
	cin >> amountOfResidents;
	setAmountOfResident(amountOfResidents);
}

void Flat::setAmountOfResident(int amount)
{
	amountOfResidents = amount;
	Resident* resident = new Resident[amount];
}

