#include <iostream>
#include "src/libperson_api.h"

//auto personlib = libperson_ExportedSymbols();

//typedef libperson_kref_Person CPerson;
int main() {
    auto test = libperson_symbols()->kotlin.root.Person;
    test.Person("test", "test");
//    std::cout << "Hello, World!" << test.get_name(seed) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}