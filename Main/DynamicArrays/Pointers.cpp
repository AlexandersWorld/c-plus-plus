#include <iostream>

int main1()
{
    int x = 4;

    //It is an value that happen to be an memmory address.
    int* pX = &x;

    //ppX -> px -> x
    //ppx is a pointer that points to another pointer the is px and finally x is the  value that px points to.
    int** ppX = &pX;

    std::cout << *ppX << std::endl;

    std::cin.get();

    return 0;
}