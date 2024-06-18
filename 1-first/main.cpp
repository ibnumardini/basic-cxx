#include <iostream>

int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

// preprocessing: g++ -E main.cpp > main.p
// compile: g++ -c main.cpp