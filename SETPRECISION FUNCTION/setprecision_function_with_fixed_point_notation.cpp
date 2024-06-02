#include <iostream>
#include <iomanip>

int main()
{
    double number = 123.456789;

    // Set precision to 2 digits after the decimal point, with fixed-point notation
    std::cout << std::fixed << std::setprecision(2) << number << std::endl; // Output: 123.46

    return 0;
}
