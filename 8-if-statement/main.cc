#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukan angka = ";
    cin >> a;

    if (a == 3)
    {
        cout << "a adalah 3" << endl;
    }
    else if (a > 5)
    {
        cout << "a lebih dari 5" << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}
