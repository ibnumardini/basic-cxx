#include <iostream>
using namespace std;

int main()
{
    // cara mendaklarasi basic array, cukup seperti ini saja
    int numbers[5];

    // deklarasi dan langsung diisi
    char alphabet[3] = {'A', 'B', 'C'};

    // mengisi araray dengan lanagsung mengakses indexnya
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;
    numbers[4] = 4;

    // print setiap iterasi
    for (auto n : numbers)
        cout << n << endl;

    cout << endl;

    for (auto a : alphabet)
        cout << a << endl;

    return 0;
}
