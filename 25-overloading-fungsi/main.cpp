#include <iostream>
using namespace std;

// untuk default value, cukup di defince pada prototipe saja
// overloading fungsi
int kuadrat(int i = 2);
float kuadrat(float i);

int main()
{
    cout << kuadrat(1) << endl;
    cout << kuadrat() << endl;
    cout << kuadrat(1.2F) << endl;

    return 0;
}

int kuadrat(int i)
{
    cout << "hitung kuadrat dengan int" << endl;
    return i * i;
}

float kuadrat(float i)
{
    cout << "hitung kuadrat dengan float" << endl;
    return i * i;
}
