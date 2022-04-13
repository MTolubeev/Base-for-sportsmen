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
        cout << "1. Загрузить" << endl;
        cout << "2. Сохранить" << endl;
        cout << "3. Добавить в конец" << endl;
        cout << "4. Удалить из конца" << endl;
        cout << "5. Показать" << endl;
        cout << "6. Задание для подростков" << endl;
        cout << "7. Задание для самого высокого пловца мужчина" << endl;
        cout << "8. Выход" << endl;
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
