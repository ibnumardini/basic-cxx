#include <iostream>

using namespace std;

int kuadrat(int value)
{
    return value * value;
}

int main()
{
    int input, result;

    cout << "Masukan nilai: ";
    cin >> input;

    result = kuadrat(input);

    cout << "hasil kuadrat dari " << input << " adalah " << result << endl;

    return 0;
}
