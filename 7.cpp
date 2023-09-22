/*
#include <iostream>
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;
     while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int main() {
    long long binaryNumber;

    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);

    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;

    return 0;
}
*/

#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::string binaryString;
    std::cout << "Enter  Binary Number: ";
    std::cin >> binaryString;
    std::bitset<32> binary(binaryString);
    unsigned long decimalNumber = binary.to_ulong();
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;

    int decNum;
    std::cout << "Enter Decimal Number: ";
    std::cin >> decNum;
    std::bitset<32> binary_(decNum);
    std::cout << "Binary equivalent: " << binary_ << std::endl;

    return 0;
}



