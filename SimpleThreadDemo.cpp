#include <iostream>
#include <string>
#include <thread>

using namespace std;

void Show1(const int &num)
{
    for (int i = 1; i <= 1000; i++)
    {
        cout << "A" + std::to_string(i) + " ";
    }
}

void Show2(const int &num)
{
    for (int i = 1; i <= 500; i++)
    {
        cout << "B" + std::to_string(i) + " ";
    }
}

void Demo()
{
    thread thread1(&Show1, 10);
    thread thread2(&Show2, 20);

    for (int i = 1; i <= 2000; i++)
    {
        cout << "C" + std::to_string(i) + " ";
    }

    thread1.join();
    thread2.join();
}

int main()
{
    Demo();
    return 0;
}