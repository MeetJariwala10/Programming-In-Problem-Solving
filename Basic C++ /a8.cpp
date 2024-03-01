#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15};
    cout << arr[1] << endl;

    int marks[6];
    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter marks for " << i << " student" << endl;
        cin >> marks[i];
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << "Student Marks is " << marks[i] << endl;
    }
    return 0;
}