#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char artitmatika;

    cout << "Selamat datanng \n\n";

    cout << "masukan nilai pertama: ";
    cin >> a;

    cout << "masukan operator (+,-,/,*): ";
    cin >> artitmatika;

    cout << "masukan nilai kedua: ";
    cin >> b;

    cout << "hasil perthitungan dari ";
    cout << a << artitmatika << b;

    // if (artitmatika == '+')
    // {
    //     hasil = a + b;
    // }
    // else if (artitmatika == '-')
    // {
    //     hasil = a - b;
    // }
    // else if (artitmatika == '/')
    // {
    //     hasil = a / b;
    // }
    // else if (artitmatika == '*')
    // {
    //     hasil = a * b;
    // }

    switch (artitmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '/':
        hasil = a / b;
        break;
    case '*':
        hasil = a * b;
        break;
    default:
        hasil = 0;
        break;
    }

    cout << " = " << hasil << endl;

    return 0;
}
