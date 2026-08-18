#include <iostream>
using namespace std;

class Complex
{
    int r, i;

public:
    void accept()
    {
        cin >> r >> i;
    }

    void add(Complex c)
    {
        cout << "Addition = " << r + c.r << " + " << i + c.i << "i\n";
    }

    void subtract(Complex c)
    {
        cout << "Subtraction = " << r - c.r << " + " << i - c.i << "i\n";
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter First Complex Number: ";
    c1.accept();

    cout << "Enter Second Complex Number: ";
    c2.accept();

    c1.add(c2);
    c1.subtract(c2);

    return 0;
}