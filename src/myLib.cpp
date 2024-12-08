#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "myLib.hpp"

void myLib::hello()
{
    std::cout << "hello from myLib\n";
}
std::vector<std::string> myLib::read_file(const std::string &file_name)

{
    std::vector<std::string> temp;
    std::ifstream file(file_name); // Open the file
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open the file." << std::endl;
    }

    std::string line;
    while (std::getline(file, line))
    {
        // std::cout << line << std::endl; // Process the line (in this case, just print it)
        temp.push_back(line);
    }

    file.close(); // Close the file
    return temp;
}