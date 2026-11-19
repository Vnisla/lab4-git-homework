#include <iostream>
#include <string>


int main()
{
    std::string name;
    //read user's name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    //print greeting
    std::cout << "Hello world from " << name << "!" << std::endl;

    return 0;
}