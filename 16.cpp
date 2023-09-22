#include <csignal>
#include <iostream>
#include <cstdlib>

void signal_handler(int signal_num) {
    std::cout << "The interrupt signal is (" << signal_num << ")." << std::endl;
    exit(signal_num);
}
int main() {
    signal(SIGINT, signal_handler);
    std::cout << "Hello GeeksforGeeks..." << std::endl;
while(1)
{

}

    return 0;
}