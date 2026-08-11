    #include <iostream>
    using namespace std;

    class Fraction
    {
        int n, d;

    public:
        void accept()
        {
            cin >> n >> d;
        }

        void add(Fraction f)
        {
            cout << (n * f.d + f.n * d) << "/" << (d * f.d);
        }
    };

    int main()
    {
        Fraction f1, f2;

        cout << "Enter first fraction: ";
        f1.accept();

        cout << "Enter second fraction: ";
        f2.accept();

        cout << "Addition = ";
        f1.add(f2);

        return 0;
    }