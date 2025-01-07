#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline

int main()
{
    // Set up variables
    int num1;
    std::string noun1;
    std::string adjective1;
    std::string name1;

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter a noun: ";
    std::cin >> noun1;

    std::cout << "Enter an adjective: ";
    std::cin >> adjective1;

    std::cout << "Enter your name: ";
    std::cin >> name1;

    // Display story
    std::cout << "There was once a " << noun1 << " named " << name1 << ". They were very " << adjective1 << ", and they were " << num1 << " years old.\n";
    
    return 0;
}
