#include <iostream>
using namespace std;

int main()
{
    int a = 24;
    int *ptr = &a;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptr << endl;
    cout << "The adress of a is " << &a << endl;
    cout << "The adress of a is " << ptr << endl;

    return 0;
}