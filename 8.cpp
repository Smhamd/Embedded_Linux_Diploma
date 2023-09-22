#include <iostream>
#include<algorithm>
/*
 void u8_GetMaxVal( int * arr, int size)
{
    int max=0;
    for (int i =0 ; i <=size ;i++)
    {
    if (arr[i] >= max)
    {
       max=arr[i];
    }
    }
    std::cout<<"Max value = "<<max;
}
*/
int main()
{
int arr[]={10,57,19,19,7,50,13};
int counter_size=0;
for(int element : arr)
{counter_size++;}
std::sort(arr,arr+counter_size);
  for (int i = 0; i < 7; ++i) {
        std::cout << arr[i] << " ";
    }
std::cout<<"Max value = "<< arr[counter_size-1];
//u8_GetMaxVal(arr, counter_size);

}