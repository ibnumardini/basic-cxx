#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    cout << "nilai awal adalah " << a << endl;

    a += b;
    cout << "nilai ditambah" << b << " adalah " << a << endl;

    a -= b;
    cout << "nilai dikurang" << b << " adalah " << a << endl;

    a /= b;
    cout << "nilai dibagi" << b << " adalah " << a << endl;

    a *= b;
    cout << "nilai dikali" << b << " adalah " << a << endl;

    a %= b;
    cout << "nilai dimodulo" << b << " adalah " << a << endl;

    return 0;
}
