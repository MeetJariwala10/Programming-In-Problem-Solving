#include <iostream>
using namespace std;

class Employee
{
    public:
    string name;
    int salary;

};

int main()
{
    Employee meet;
    meet.name = "MEET";
    meet.salary = 100000;
    cout<<"The name of employee is "<<meet.name<<" and salary is "<<meet.salary;
    return 0;
}