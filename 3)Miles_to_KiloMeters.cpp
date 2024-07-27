#include <iostream>

int main() {

float miles=0,kilometers=0;

std::cout<<"Enter the distance in miles: ";
std::cin>>miles;

kilometers=1.609*miles;//1 mile is equal to 1.609344 kilometers.
std::cout<<"The distance in kilometers: "<<kilometers<<" \n";

}
