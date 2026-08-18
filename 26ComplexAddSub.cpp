#include <iostream>
using namespace std;

int main()
{
    int r1, i1, r2, i2;

    cout << "Enter First Complex Number: ";
    cin >> r1 >> i1;

    cout << "Enter Second Complex Number: ";
    cin >> r2 >> i2;

    cout << "Sum = " << r1 + r2 << " + " << i1 + i2 << "i" << endl;
    cout << "Sub = " << r1 - r2 << " + " << i1 - i2 << "i";

    return 0;
}