#include <iostream>
#include "Windows.h"
#include "House.h"
#include "Flat.h"
#include "Resident.h"
using namespace std;

void printTable()
{
    House* house;
    Flat* flat;
    cout << "Дом "; 
    house->getNameOfHouse();
    cout << "\nНомер квартиры.\tКоличество проживающих.\n";
    int flats = house->getAmountOfFlats();
    for (int i = 0; i < flats; i++)
    {
        cout << i + 1 << "\t\t\t\t" << flat->getAmountOfResident();
    }

}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Добро пожаловать в программу в список дома.\n";
    cout << "Заполнение списка:\n";
    House();
    int operation;
    do {
        cout << "Введите номер операции(1 - вывести список квартир с количеством владельцев; 2 - просмотреть по номеру квартиры проживающих; 3 - удалить список; 4 - выход из программы): ";
        cin >> operation;
        switch (operation) {
        case 1:
        {
            printTable();
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            cout << "Выход из программы.\n";
            break;
        }
        default:
        {
            cout << "Команды нет.\n";
            break;
        }
        }
    } while (operation != 4);
}


