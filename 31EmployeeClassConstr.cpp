#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    // Default constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main()
{
    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;

    Employee e1(id, name, salary);

    Employee e2(e1);

    cout << "\nEmployee Details:";
    e1.display();

    cout << "\nCopied Employee Details:";
    e2.display();

    return 0;
}