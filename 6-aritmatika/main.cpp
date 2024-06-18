#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    int result;

    // penjumlahan +
    result = a + b;
    cout << a << " + " << b << " = " << result << endl;

    // pengurangan -
    result = a - b;
    cout << a << " - " << b << " = " << result << endl;

    // perkalian *
    result = a * b;
    cout << a << " * " << b << " = " << result << endl;

    // pembagian -
    // pembagian yang menghasilkan koma, harus di tampung dalam sebuah tipe data float
    // jika salah satu nilai yanag di bagi harus float, jika tidak maka aka jadi integer (pembulatan kebawah)
    result = a / b;
    cout << a << " / " << b << " = " << result << endl;

    // sisa bagi (modulo) -
    result = a % b;
    cout << a << " % " << b << " = " << result << endl;

    return 0;
}
