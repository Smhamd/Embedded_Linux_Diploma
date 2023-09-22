#include<iostream>


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(auto element : arr)
    {
        if(element % 2 == 0)
                std::cout<<"Element "<<element <<"   is Even Number"<<std::endl;
        else
                std::cout<<"Element "<<element <<"   is Odd Number"<<std::endl;
    
    }
    return 0;
}