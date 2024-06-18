#include <iostream>

using namespace std;

int main()
{
    // rumus f_n = f_n1 + f_n2
    int n = 0;
    int f_n, f_n1, f_n2;

    cout << "program deret finonaci \n";
    cout << "masukan jumlah deret: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;

    cout << f_n1 << endl;
    for (int i = 1; i <= n; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << endl;
    }

    return 0;
}
