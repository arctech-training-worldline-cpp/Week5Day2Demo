#include <iostream>

using namespace std;

void Show1()
{
    for (int i = 1; i <= 1000; i++)
    {
        cout << 'A' << i << ' ';
    }
}

void Show2()
{
    for (int i = 1; i <= 500; i++)
    {
        cout << 'B' << i << ' ';
    }
}

int Demo()
{
    Show1();
    Show2();

    for (int i = 1; i <= 200; i++)
    {
        cout << 'C' << i << ' ';
    }

    return 0;
}

int main()
{
    Demo();
}