#include <iostream>

using namespace std;

int main()
{
    // inisialisasi, kondisi, increment
    cout << "loop 1" << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    // loopnya untuk kelipatan 2
    cout << "\nloop 2" << endl;
    for (int j = 0; j <= 10; j += 2)
    {
        cout << j << endl;
    }

    // gunakan decrement untuk loop kebalik, berguna untuk reverse data
    cout << "\nloop 3" << endl;
    for (int k = 10; k >= 0; k--)
    {
        cout << k << endl;
    }

    // untuk mendapat hasil penjumlahan pengurangan (sum)
    cout << "\nloop 4" << endl;
    int total = 0;
    for (int l = 0; l <= 10; /*total += l,*/ l++)
    {
        total += l; // variasi dari total sum, bisa di tambahkan di dalam blok for (total += l,)
        cout << l << endl;
    }
    cout << "\nhasil hasil " << total << endl;

    cout << "\nselesai" << endl;

    return 0;
}
