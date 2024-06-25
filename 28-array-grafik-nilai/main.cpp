#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> values;

    cout << "Program menampilkan grafik nilai.\n\n";

    for (int i = 0; i < values.size(); i++)
    {
        cout << "Jumlah mahasiswaa dengan nilai ";
        if (i == 0)
        {
            cout << "1 - 10: ";
        }
        else if (i == 10)
        {
            cout << "100: ";
        }
        else
        {
            printf("%d - %d : ", i * 10, i * 10 + 9);
        }

        cin >> values[i];
    }

    for (int j = 0; j < values.size(); j++)
    {
        if (j == 0)
        {
            cout << "1 - 10: ";
        }
        else if (j == 10)
        {
            cout << "100: ";
        }
        else
        {
            printf("%d - %d : ", j * 10, j * 10 + 9);
        }

        for (int k = 0; k < values[j]; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
