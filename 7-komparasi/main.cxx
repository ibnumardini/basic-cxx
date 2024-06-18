#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 5;

    bool hasil;

    // komprasi samadengan
    hasil = a == b;
    cout << a << " == " << b << " adalah " << hasil << endl;

    // komprasi tidak sama dengan
    hasil = a != b;
    cout << a << " != " << b << " adalah " << hasil << endl;

    // komprasi lebih dari
    hasil = a > b;
    cout << a << " > " << b << " adalah " << hasil << endl;

    // komprasi kurang dari
    hasil = a < b;
    cout << a << " < " << b << " adalah " << hasil << endl;

    // komprasi lebih dari sama dengan
    hasil = a >= b;
    cout << a << " >= " << b << " adalah " << hasil << endl;

    // komprasi kurang dari sama dengan
    hasil = a <= b;
    cout << a << " <= " << b << " adalah " << hasil << endl;

    return 0;
}
