#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int i = 1;

    // sizeof dipakai untuk melihat ukuran data, int di c++ adalah 4 byte, atau 32 bit
    cout << i << " " << sizeof(i) << endl;

    // melihat ukuran batas panjang yang bisa di isi pada tipe data int yaitu 2147483647
    // 32bit pada int, pada bit 0 di pakai untuk +/- jadi sisa 31 bit, yaitu 2^31 = 2147483647
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    long j = 1;

    // sizeof dipakai untuk melihat ukuran data, int di c++ adalah 8 byte, atau 64 bit
    cout << j << " " << sizeof(j) << endl;

    // melihat ukuran batas panjang yang bisa di isi pada tipe data int yaitu 9223372036854775807
    // 32bit pada int, pada bit 0 di pakai untuk +/- jadi sisa 63 bit, yaitu 2^63 = 9223372036854775807
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    short k = 1;

    // sizeof dipakai untuk melihat ukuran data, int di c++ adalah 2 byte, atau 16 bit
    cout << k << " " << sizeof(k) << endl;

    // melihat ukuran batas panjang yang bisa di isi pada tipe data int yaitu 32767
    // 32bit pada int, pada bit 0 di pakai untuk +/- jadi sisa 15 bit, yaitu 2^15 = 32767
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    // menghilangkan minus, jadi yang terpakai bukan 31 bit tapi 32 bit
    unsigned int a = 1;

    char b = 'a';

    float c = 1.1;
    double d = 1.2;

    bool e = true;

    return 0;
}
