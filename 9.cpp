#include <iostream>
#include <algorithm> // Include the <algorithm> header for std::sort
#include <vector>
//thinking as c (sorting array then using Binary Search) 
/*
void SearchInArray(int * arr , int size , int number)
{
    int left = 0;
    int right = size - 1;
    int i=0;
    while (left <= right || i<= size) {
        i++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == number) {
            std::cout<<"Number found at index"<<mid; 
            // Found the target, return its index
        } else if (arr[mid] < number) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }
}

*/

int main()
{
int arr[]={0,5,19,19,7,8,9};

std::sort(std::begin(arr),std::end(arr));
int arr_size = sizeof(arr) / sizeof(arr[0]);
bool ret;
ret=std::find(arr,arr+arr_size,7);
if (ret==1)
std::cout<<"Number found";
else
std::cout<<"Number Not Found";

//SearchInArray(arr, 7 , 7);

}


