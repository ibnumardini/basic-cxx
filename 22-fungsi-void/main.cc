#include <iostream>

// yang mempunyai return di sebut reporter
int add(int a, int b)
{
    return a + b;
}

// yang void, tidak ada return disebut woekr
void pesan(int a)
{
    printf("nilainya adalah: %d\n", a);
}

int main()
{
    int a = 5;
    pesan(add(1, 2));

    return 0;
}
