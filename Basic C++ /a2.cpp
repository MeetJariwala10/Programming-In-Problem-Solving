#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "The value is " << a << endl;

    a = 10;
    cout << "The value is " << a;

    int const b = 2;
    // using const makes the b constant
    // so any change to b will not takes pplace

    // b = 32;
    // cout<<"The value is "<<b;

    return 0;
}