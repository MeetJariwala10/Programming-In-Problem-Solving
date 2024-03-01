#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Meet";
    cout << "The name is " << str << endl;
    cout << "The length of name is " << str.length() << endl;
    cout << "The name is " << str.substr(0, 3) << endl;
    cout << "The name is " << str.substr(1, 3) << endl;

    return 0;
}