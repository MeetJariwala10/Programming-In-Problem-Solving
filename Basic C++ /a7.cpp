#include <iostream>
using namespace std;

// functions
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;

    cout << "Enter 1st number " << endl;
    cin >> a;

    cout << "Enter 2nd number " << endl;
    cin >> b;

    cout << "The sum is : " << add(a,b);

    return 0;
}