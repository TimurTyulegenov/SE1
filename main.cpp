//��������� ��������� �������
//��������� ������ ��-417
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout<<"������� ��� ����� �����"<<endl;
    cout<<"����� �:";
    cin>>a;
    cout<<"����� B:";
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

