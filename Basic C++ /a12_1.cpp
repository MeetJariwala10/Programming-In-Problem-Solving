#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of employee is " << this->name << " and salary is " << this->salary << endl;
    }

    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword << endl;
    }
// public methods can access private methods
private:
    int secretPassword;
};

// inheritance
class Programmer: public Employee
{
    public:
    int errors;
};

int main()
{
    Employee me("Meet constructor", 150000, 1512);
    // me.name = "MEET";
    // me.salary = 100000;
    me.printDetails();
    me.getSecretPassword();

    return 0;
}