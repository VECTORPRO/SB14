#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>
#include <cstddef>

int main()
{
    std::string name("Vorfolomey");
    std::string Symv1("");
    std::string SymvLast("");

    std::cout << "String: " << name << "\n";
    std::cout << "Count Symbols: " << name.length() << "\n";

    std::cout << "First Symbol: " << name.front() << "\n";
    std::cout << "Last Symbol: " << name.back() << "\n";

    std::cin;
    return 0;
}