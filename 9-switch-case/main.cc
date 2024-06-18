#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan angka = ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Halo" << endl;
        break;
    default:
        cout << "Ya default" << endl;
    }

    return 0;
}
