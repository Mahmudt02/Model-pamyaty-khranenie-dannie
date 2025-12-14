#include <iostream>
#include <iomanip>
#include <string>

int main() {
  
    int var_int;
    short var_short;
    long var_long;
    long long var_long_long;
    float var_float;
    double var_double;
    long double var_long_double;
    bool var_bool = true;

    
    std::cout << std::hex << std::uppercase << std::setfill('0');

   

    std::cout << "short: " << std::setw(8) << (void*)&var_short << " " << std::dec << sizeof(var_short) << std::endl;
    std::cout << "int: " << std::setw(8) << (void*)&var_int << " " << std::dec << sizeof(var_int) << std::endl;
    std::cout << "long: " << std::setw(8) << (void*)&var_long << " " << std::dec << sizeof(var_long) << std::endl;
    std::cout << "long long: " << std::setw(8) << (void*)&var_long_long << " " << std::dec << sizeof(var_long_long) << std::endl;
    std::cout << "float: " << std::setw(8) << (void*)&var_float << " " << std::dec << sizeof(var_float) << std::endl;
    std::cout << "double: " << std::setw(8) << (void*)&var_double << " " << std::dec << sizeof(var_double) << std::endl;
    std::cout << "long double: " << std::setw(8) << (void*)&var_long_double << " " << std::dec << sizeof(var_long_double) << std::endl;
    std::cout << "bool: " << std::setw(8) << (void*)&var_bool << " " << std::dec << sizeof(var_bool) << std::endl;

    return 0;
}