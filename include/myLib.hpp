#pragma once

#include <iostream>
#include <vector>
#include <string>

namespace myLib
{
    void hello();
    std::vector<std::string> read_file(const std::string &file_name);
}