#include <iostream>

int main() {
    std::cout << "ASCII Table:" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "Char |  Decimal ASCII Value" << std::endl;
    std::cout << "=====================" << std::endl;
    
    for (int i = 0; i <= 127; ++i) {
    //Make static cast to Char to print its corresponding ASCI code
        std::cout << static_cast<char>(i)<< "  |  " << i << std::endl;
    }

    return 0;
}
