#include <iostream>

int main()
{
    int Number_1,Number_2,Number_3,Max_Number;
    std::cout<<"Enter Number_1"<<std::endl;
    std::cin>>Number_1;
    std::cout<<"Enter Number_2"<<std::endl;
    std::cin>>Number_2;
    std::cout<<"Enter Number_3"<<std::endl;
    std::cin>>Number_3;
    if(Number_1>=Number_2)
    {
         Max_Number=Number_1;
    }
    else
    {
            Max_Number=Number_2;
        
    }

    if (Number_3>=Max_Number)
    {
        Max_Number=Number_3;
    }

std::cout<<"Max Number = "<< Max_Number<<std::endl;
}