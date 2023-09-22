#include <iostream>
int main()
{
    int number;
    std::cout<<"Enter Number"<<std::endl;
    std::cin>>number;

    for (int i = 0;i<=12;i++)
    {
        std::cout<<number<< "  *  " << i << "  =  " <<i * number<<std::endl;
    }
}