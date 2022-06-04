#include <iostream>
#include "Flat.h"
#include "Resident.h"
using namespace std;

Flat::Flat()
{
	//cout << " вартира.\n";
	static int numberOfFlat = 1;
	cout << " вартира " << numberOfFlat << ":\n";
	numberOfFlat++;
	cout << "¬ведите количество проживающих: ";
	int amountOfResidents;
	cin >> amountOfResidents;
	setAmountOfResident(amountOfResidents);
}

void Flat::setAmountOfResident(int amount)
{
	amountOfResidents = amount;
	Resident* resident = new Resident[amount];
}

