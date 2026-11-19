#include <iostream>
#include <string>


int main()
{
    std::string name;
    //read the user's full name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    //Display greeting
    std::cout << "Hello world from " << name << "!" << std::endl;

    return 0;
}
