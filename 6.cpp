/*
#include <iostream>
int main()
{
    int number,temp,sum=0;
    std::cout<<"Enter Number"<<std::endl;
    std::cin>>number;

    while (number >0)
    {
        temp=number%10;
        sum+=temp;
        number/=10;
    }    
    std::cout<<"Summation of digits = "<<sum<<std::endl;
}
*/
#include <iostream>
int main()
{
    int number,sum=0;
    std::cout<<"Enter Number"<<std::endl;
    std::cin>>number;
  
    std::string numberstring = std::to_string(number);

    for( char digitchar : numberstring)
    {int digit = digitchar -'0';
    sum+=digit;
        }    
    std::cout<<"Summation of digits = "<<sum<<std::endl;
}