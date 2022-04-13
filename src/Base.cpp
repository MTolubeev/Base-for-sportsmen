#include "Base.h"
#include "vector"
#include <string.h>

Base::Base()
{
    arr = NULL;
    count = 0;
}

Base::~Base()
{
    if (arr) delete [] arr;
}


void Base::resize(int b)
{
    if (arr)
    {
        Sportsmen *newarr=new Sportsmen[b];
        for (int i = 0; i<count && i<b; i++)
        {
            newarr[i]=arr[i];
        }
        delete [] arr;
        arr = newarr;
    }
    else
        arr = new Sportsmen[b];
}


int Base::push_back()
{
    if (arr == NULL)
    {
        count = 1;
        arr = new Sportsmen[count];
        arr[0].input();
    }
    else
    {
        resize(++count);
        arr[count-1].input();
    }
    return count;
}

int Base::pop_back()
{
    if (count <= 0) return 0;
    if (--count > 0)
        resize(count);
    else
        delete [] arr;
}

int Base::view()
{
    if (count == 0)
    {
        cout << "Array is empty" << endl;
        return -1;
    }
    for (int i = 0; i<count; i++)
        arr[i].output();
}

void Base::taskForteen()
{
    if (count == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }
    for (int i = 0; i<count; i++)
        if (arr[i].getYear()>=2003 && arr[i].getYear()<=2006) arr[i].output();
}

void Base::taskForSwim()
{
    if (count == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }
   char swimming[20] = {'s','w','i','m','m','i','n','g'};
   char gender[50] = {'m','e','n'};
    vector<Sportsmen> swimmer;
    for (int i = 0; i<count; i++){
        if (!strcmp(arr[i].getSport(),swimming) && !strcmp(arr[i].getGender(),gender)) {
                swimmer.push_back(arr[i]);
        }
    }
    if(swimmer.size()==0) cout<<"There are not another swimmer and men";
    int max=0;
    for(int i=0;i<swimmer.size();i++) {
        if(swimmer[i].getHeight()>max) max=swimmer[i].getHeight();
    }
     for(int i=0;i<swimmer.size();i++) {
        if(swimmer[i].getHeight()==max) swimmer[i].output();
    }
}


void Base::save()
{
    ofstream out("output.bin", ios::binary);
    for (int i=0; i<count; i++)
    {
        out.write((char*)&arr[i],sizeof(Sportsmen));
    }

}

void Base::load()
{
    ifstream in("output.bin", ios::binary);
    in.seekg (0, ios::end);
    count = in.tellg() / sizeof(Sportsmen);
    in.seekg (0, ios::beg);
    resize(count);
    for (int i=0; i<count; i++)
    {
        in.read((char*)&arr[i],sizeof(Sportsmen));
    }
}

