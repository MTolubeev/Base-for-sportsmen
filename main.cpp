#include <Sportsmen.h>
#include <Base.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    char menu;
    Base my;
    do
    {
        system ("CLS");
        cout << "1. ���������" << endl;
        cout << "2. ���������" << endl;
        cout << "3. �������� � �����" << endl;
        cout << "4. ������� �� �����" << endl;
        cout << "5. ��������" << endl;
        cout << "6. ������� ��� ����������" << endl;
        cout << "7. ������� ��� ������ �������� ������ �������" << endl;
        cout << "8. �����" << endl;
        menu = getchar();
        switch (menu)
        {
        case '1':
            my.load();
            system("PAUSE");
            break;
        case '2':
            my.save();
            system("PAUSE");
            break;
        case '3':
            my.push_back();
            system("PAUSE");
            break;
        case '4':
            my.pop_back();
            system("PAUSE");
            break;
        case '5':
            my.view();
            system("PAUSE");
            break;
        case '6':
            my.taskForteen();
            system("PAUSE");
            break;

        case '7':
            my.taskForSwim();
            system("PAUSE");
            break;
        }
    }
    while (menu!='8');

    return 0;
}
