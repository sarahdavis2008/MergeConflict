#include <iostream>
using namespace std;

void say(string s);

int add(int a, int b);

int main()
{
    cout << "Greeting....\n";
    cout << "Hello World\n";

    return 0;
}

void say(string s)
{
    cout << s << endl;
}

int add(int a, int b)
{
    return a + b;
}
