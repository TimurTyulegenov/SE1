//Программа являеться учебной
//Тюлегенов Валеев КЭ-417
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout<<"Введите два целых числа"<<endl;
    cout<<"Число А:";
    cin>>a;
    cout<<"Число B:";
    cin>>b;
    c=a+b;
    cout<<"a+b="<<c<<endl;
    c=a-b;
    cout<<"a+b="<<c<<endl;
    c=a*b;
    cout<<"a*b="<<c<<endl;
    c=a/b;
    cout<<"a/b="<<c<<endl;
    return 0;
}

