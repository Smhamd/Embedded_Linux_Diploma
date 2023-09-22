#include <iostream>
#include <vector>
#include <algorithm> 
int main() 
{
    int arr1[] = {1, 2, 3,4,5};
    int arr2[] = {6,7,8,9,10};
    int * end_arr1=arr1+(sizeof(arr1) / sizeof(arr1[0]));
    int * end_arr2=arr2+(sizeof(arr2) / sizeof(arr2[0]));

    std::vector<int> vec1(arr1, end_arr1 );
    std::vector<int> vec2(arr2, end_arr2);

    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    std::cout << "Merged vector: ";
    for ( auto num : vec1 ) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
