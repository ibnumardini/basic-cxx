#include <iostream>

using namespace std;

double hitung_luas(double p, double l)
{
    double luas = p * l;
    return luas;
}

double hitung_keliling(double p, double l)
{
    double keliling = 2 * (p + l);
    return keliling;
}

int main()
{
    double p = 10;
    double l = 5;

    cout << "luas dari " << p << " x " << l << " adalah " << hitung_luas(p, l) << endl;
    cout << "keliling dari " << p << " x " << l << " adalah " << hitung_keliling(p, l) << endl;

    return 0;
}
