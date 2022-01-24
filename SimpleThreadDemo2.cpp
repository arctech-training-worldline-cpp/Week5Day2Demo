#include <iostream>
#include <string>
#include <thread>

using namespace std;

static void Show(const char* param)
{
    for (int i = 1; i <= 500; i++)
    {
        cout << string(param) + to_string(i) + " ";
    }
}

void Demo()
{
    thread thread1(&Show, "A");
    thread thread2(&Show, "B");

    thread1.join();
    thread2.join();
}

int main()
{
    Demo();
    return 0;
}