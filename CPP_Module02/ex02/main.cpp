#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(5.05f);
    Fixed const c(2);
    Fixed const d(b);

    std::cout << "Testing constructors and assignment:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d (copy of b): " << d << std::endl;

    std::cout << "\nTesting arithmetic operators:" << std::endl;
    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "b - c = " << b - c << std::endl;
    std::cout << "b * c = " << b * c << std::endl;
    std::cout << "b / c = " << b / c << std::endl;

    std::cout << "\nTesting comparison operators:" << std::endl;
    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= c: " << (b >= c) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == c: " << (b == c) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    std::cout << "\nTesting increment and decrement operators:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a: " << a << std::endl;

    std::cout << "\nTesting min and max functions:" << std::endl;
    std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

    Fixed e(10);
    Fixed f(20);
    std::cout << "min(e, f): " << Fixed::min(e, f) << std::endl;
    std::cout << "max(e, f): " << Fixed::max(e, f) << std::endl;

    const Fixed g(15);
    const Fixed h(25);
    std::cout << "min(g, h): " << Fixed::min(g, h) << std::endl;
    std::cout << "max(g, h): " << Fixed::max(g, h) << std::endl;

    return 0;
}