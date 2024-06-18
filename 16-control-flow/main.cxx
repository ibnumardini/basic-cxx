#include <iostream>

using namespace std;

int main()
{
    // control flow ini juga bekerja untuk perulangan yang lain while, dowhile
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // menyetop proses, dan keluar dari for loop
        }

        if (i % 2 == 0)
        {
            continue; // melompati loop yang sedang berjalan ke loop berikutnya
        }

        cout << i << endl;
    }

    cout << "selesai" << endl;

    return 0;
}
