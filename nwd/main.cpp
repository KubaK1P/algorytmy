#include <iostream>

int nwd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }   
    } return a;
}

int main() {
    int a, b;
    std::cout << "Podaj a i b" << "\n";
    std::cin >> a >> b;

    std::cout << "NWD (" << a << ", " << b << ") = " << nwd(a, b) << "\n";
    return 0;
}