#include"project.h"
#include<iostream>
int main() {
    Bigint a(12345);
    Bigint b("98765432109876543210");
    Bigint c("2345");

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    Bigint d = b;
    std::cout << "d (copy of b) = " << d << std::endl;
    Bigint e;
    e = a;
std::cout << "e (assigned from a) = " << e << std::endl;

                 std ::cout << "--- Comparisons ---" << std::endl;
    std::cout << "a == e: " << (a == e) << std::endl; // 1
    std::cout << "a <= e: " << (a <= e) << std::endl; // 1
    std::cout << "a != b: " << (a != b) << std::endl; // 1
    std::cout << "a < b: " << (a < b) << std::endl;   // 1
    std::cout << "a >= b: " << (a >= b) << std::endl; // 0
    std::cout << "b > a: " << (b > a) << std::endl;   // 1
    std::cout << "c == a: " << (c == a) << std::endl; // 0
    std::cout << "c < a: " << (c < a) << std::endl;   // 1

return 0;
}
