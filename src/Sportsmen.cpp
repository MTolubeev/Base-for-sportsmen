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
    cout << "������� >";
    cin >> name;
    cout << "��� >";
    cin >> gender;
    cout << "��� �������� ";
    cin >> year;
    cout << "��� ������ ";
    cin >> sport;
    cout << "���� ";
    cin >> height;
}

void Sportsmen::output(void)
{
    cout << "������� <" << name << ">, ��� <" << gender << ">, ��� �������� "  << year << " ��� ������ " << sport <<
     " ���� <" << height <<  ">" << endl;
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
