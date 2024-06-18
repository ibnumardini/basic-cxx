#include <iostream>

using namespace std;

int hitung_luas(int p, int l);
void println(int l);

// prototype di gunakan untuk memberi tahu kompiler bahwa ada fungsi di bawah main
int main()
{
    int p, l, result;
    cin >> p;
    cin >> l;

    result = hitung_luas(p, l);
    println(result);

    return 0;
}

int hitung_luas(int p, int l)
{
    return p * l;
}

void println(int l)
{
    cout << "luas " << l << endl;
}
