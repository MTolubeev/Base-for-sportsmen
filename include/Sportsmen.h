#ifndef SPORTSMEN_H
#define SPORTSMEN_H

#include <iostream>
#include <fstream>
using namespace std;


class Sportsmen
{
    public:
        Sportsmen();
        ~Sportsmen();
        void input(void);
        void output(void);
        int getYear(void);
        int getHeight(void);
        char* getSport(void);
        char* getGender(void);
    private:
        char name[50];
        char gender[50];
        int year;
        char sport[20];
         int height;
};


#endif // MUSIC_H
