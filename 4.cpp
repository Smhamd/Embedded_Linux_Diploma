#include<iostream>

int main()
{
    char letter;
    std::cout<<"Enter Letter"<<std::endl;
    std::cin>>letter;
    letter = tolower (letter);
    if( letter == 'a' || letter == 'o'|| letter == 'e'|| letter == 'u')
    {std::cout<<"Letter is vowel";}
    else
    std::cout<<"Letter is not vowel";

    

}