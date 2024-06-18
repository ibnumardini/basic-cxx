#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Masukan panjang pola: ";
    cin >> n;

    // *
    // **
    // ***
    // ****
    // *****
    cout << "\nPola 1" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // *****
    // ****
    // ***
    // **
    // *
    cout << "\nPola 2" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    //  *****
    //   ****
    //    ***
    //     **
    //      *
    cout << "\nPola 3" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    //      *
    //     **
    //    ***
    //   ****
    //  *****
    cout << "\nPola 4" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
