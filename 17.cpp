#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
    int x,y;
    std::cout<<"Enter Starting Number \n";
    std::cin>>x;
    std::cout<<"Enter End Number \n";
    std::cin>>y;

    std::vector<int> arr(((y-x)+1)); 
    std::iota(arr.begin(), arr.end(), x);

    for (int i = 0; i < y-x; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}