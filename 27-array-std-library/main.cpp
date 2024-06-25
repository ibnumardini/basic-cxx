#include <iostream>
#include <array>
using namespace std;

int main()
{
    // cara deklarasi array dengan standard library
    array<int, 5> numbers = {1, 2, 3, 4, 5};

    // loop dan print array sebanyak numbers.size()
    for (int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << endl;

    return 0;
}
