// string stream test
#include <iostream>
#include <sstream>
#include <string>
int main() {
    std::ostringstream oss("long content");
    std::cout << oss.str() << std::endl;
    oss << "LONG"; // this would fill the "LONG" at the begining
    std::cout << oss.str() << std::endl;
    oss << " CONTENT";    // this would fill the string after the "LONG"
    oss.seekp(0);   // make the pointer at the front of the string
    oss << "SHORT"; // this would fill the "SHORT" at the begining
    std::cout << oss.str() << std::endl;
    oss.clear();    // clear the string
    std::cout << oss.str() << std::endl;
}