#include <iostream>
using namespace std;

// TODO: masih pr untuk rumus2 nya
int main()
{
    int n = 5;

    cout << "Masukan panjang pola: ";
    // cin >> n;

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    cout << "\nPola 1" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // *********
    //  *******
    //   *****
    //    ***
    //     *
    cout << "\nPola 2" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    cout << "\nPola 3" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
