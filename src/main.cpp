#include <iostream>
#include "myLib.hpp"
#include "lib.hpp"

int main(int argc, char *argv[])
{
    // std::cout << "Hello C++\n";
    // myLib::hello();
    // slk_lib::hello_slkLib();
    std::cout << "***************************************" << std::endl;
    std::cout << "*              TO DO APP              *" << std::endl;
    std::cout << "***************************************" << std::endl;

    // get cli args
    auto args = slk_lib::get_args(argc, argv);

    // get database file name
    std::string data_file_name;
    for (const auto &pair : args)
    {
        // std::cout << pair.first << ": " << pair.second << std::endl;
        if (pair.first.find("db") != std::string::npos)
        {
            data_file_name = pair.second;
            break;
        }
    }

    // read data from file
    auto temp_data = myLib::read_file(data_file_name);
    for (auto &line : temp_data)
        std::cout << line << std::endl;
    return 0;
}