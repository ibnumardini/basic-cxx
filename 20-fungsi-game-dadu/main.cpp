#include <iostream>
// #include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    // int n;
    // cout << "masukan sebuah nilai: ";
    // cin >> n;

    // cout << "akar dari " << n << " adalah: " << sqrt(n) << endl;

    char play;

    while (true)
    {
        cout << "Lempar dadu? (y/n): ";
        cin >> play;

        if (play == 'n')
        {
            break;
        }

        int guess;

        cout << "Masukan angka: ";
        cin >> guess;

        int num = 1 + (rand() % 6);

        if (guess == num)
        {
            cout << "Tebakan anda benar";
        }
        else
        {
            cout << "Tebakan anda salah";
        }

        cout << ", nilai dadu adalah " << num << endl;
    }

    return 0;
}
