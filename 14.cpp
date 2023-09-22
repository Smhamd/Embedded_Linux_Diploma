/*
#include<iostream>
int main ()
{
char x;
std::cout<<"Enter Input \n";
std::cin>>x;
x=static_cast<int>(x);
if ( (48 <=x) && (x<=57))
std::cout<<"Digit";
    return 0;
}
*/

#include<iostream>
#include<cctype>
int main()
{
    char x ;
    std::cout<<"Enter Input \n";
    std::cin>>x;

    if (std::isdigit(x)) {
        std::cout << x << " is a digit." << std::endl;
    } else {
        std::cout << x << " is not a digit." << std::endl;
    }


    return 0;
}
