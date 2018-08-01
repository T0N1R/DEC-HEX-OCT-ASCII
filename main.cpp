/* 
 * File:   main.cpp
 * Author: Antonio
 *
 * Created on August 1, 2018, 7:13 AM
 */

#include <iostream>

int main() {
    int n=32;
    std::cout<<"DEC HEX OCT CHAR\n";
    std::cout<<"----------------\n";
    while(n<128){
        char w = n;
        std::cout << " "<<std::dec<< n << "  " << std::hex<< n << "  " << std::oct<< n << "  " << w << "\n";
        n++;
    }
    return 0;
}