#include <iostream>

int main()
{
    std::cout << "New content.";
    int* x = new int;
    *x = 5;
    std::cout << *x;

    double* y = new double;
    *y = 4.4;
    std::cout << *y +1;
    std::cout << "Linux";
    delete x;
    delete y;
    return 0;
}
