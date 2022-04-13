#include "Sportsmen.h"

Sportsmen::Sportsmen()
{
    //ctor
}

Sportsmen::~Sportsmen()
{
    //dtor
}

void Sportsmen::input(void)
{
    cout << "Фамилия >";
    cin >> name;
    cout << "Пол >";
    cin >> gender;
    cout << "Год рождения ";
    cin >> year;
    cout << "Вид спорта ";
    cin >> sport;
    cout << "Рост ";
    cin >> height;
}

void Sportsmen::output(void)
{
    cout << "Фамилия <" << name << ">, Пол <" << gender << ">, Год рождения "  << year << " Вид спорта " << sport <<
     " Рост <" << height <<  ">" << endl;
}

int Sportsmen::getYear(void)
{
    return year;
}
int Sportsmen::getHeight(void)
{
    return height;
}
char* Sportsmen::getSport(void)
{
    return sport;
}
char* Sportsmen::getGender(void)
{
    return gender;
}
