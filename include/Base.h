#ifndef BASE_H
#define BASE_H
#include <Sportsmen.h>

class Base
{
    public:
        Base();
        ~Base();
        int push_back();
        int pop_back();
        int view();
        void resize(int);
        void taskForSwim();
        void taskForteen();
        void save();
        void load();
    private:
        Sportsmen *arr;
        int count;
};

#endif // ALBUM_H
