//#include "Laptop.hpp"
//#include "Processor.hpp"
#include "Laptop.cpp"
#include "Processor.cpp"

#include <iostream>

int main()
{
    Processor intelCore(2.7, 4, 3);
    intelCore.printProcessorInformation();
    std::cout << std::endl;
    
    Laptop assus("Assus VivoBook S14", 1600.0, 14.0, intelCore, 8.0, 2500);
    Laptop lenovo("Lenovo Thinkpad X1 Carbon", 2800.0, 12.0, intelCore, 16.0, 3000);

    assus.printLaptopInformation();
    std::cout << std::endl;
    lenovo.printLaptopInformation();
    std::cout << std::endl;

    std::cout << (assus == lenovo) << std::endl;
    std::cout << (assus != lenovo) << std::endl;
    std::cout << (assus < lenovo) << std::endl;
    std::cout << (assus > lenovo) << std::endl;

    return 0;
}